# AGENTS.md

## Scope
These instructions apply to the entire repository unless a deeper `AGENTS.md` overrides them.

## Project goal
This repository contains a university Verilog project for a vending machine.

The main objective is to produce a structurally correct and testable implementation that matches the project specification exactly.

Priority order:
1. Functional correctness against the specification
2. Clean controller/datapath separation
3. Consistent module interfaces and bit widths
4. Passing simulations and comparison testbench
5. Minimal, focused changes instead of random rewrites

## High-level rules
- Do not invent new features not required by the specification.
- Do not keep incorrect legacy behavior just to preserve old code.
- Prefer fixing the architecture over patching symptoms.
- Treat partial CircuitVerse-style experiments as disposable unless they clearly help the final structural design.
- Do not leave placeholder or empty modules in the final patch.
- Do not duplicate module definitions under different files/names.
- Do not change file names required by the assignment unless strictly necessary to restore compliance.

## Repository intent
The final repository should converge toward this structure:

- `behavioral/`
  - `vending_behavioral.v`
  - `tb_behavioral.v`
- `structural/`
  - `vending_structural.v`
  - `tb_structural.v`
  - supporting structural submodules
- `testbench.v`
- `compile.sh`

If other files are kept, they must be clearly useful to the build or documentation.

## Assignment constraints that must be respected
Assume the project specification is authoritative.

### Required interface
Inputs:
- `clk`
- `rst` active low
- `coin[2:0]`
- `selezione[2:0]`
- `conferma`
- `annulla`

Outputs:
- `credito[5:0]`
- `prodotto1`
- `prodotto2`
- `prodotto3`
- `prodotto4`
- `errore[1:0]`
- `resto[5:0]`
- `disponibile[9:0]`

For 3-student groups also:
- `coin_01[5:0]`
- `coin_02[5:0]`
- `coin_05[5:0]`
- `coin_10[5:0]`

### Mandatory behavior
- Reset is active low.
- After reset returns to 1, the machine enters a 12-cycle configuration phase.
- Configuration values are loaded from the concatenation `{coin, selezione}`.
- The 12 setup cycles load:
  1. qty product 1
  2. price product 1
  3. qty product 2
  4. price product 2
  5. qty product 3
  6. price product 3
  7. qty product 4
  8. price product 4
  9. initial 0.1 coins
  10. initial 0.2 coins
  11. initial 0.5 coins
  12. initial 1.0 coins
- A transaction starts when the user inserts the first coin.
- The user inserts coins before selecting the product.
- `annulla` must return the inserted credit as change.
- If credit is insufficient, `errore` must report it and the machine must expose the selected product price as required by the assignment.
- `errore[1:0]` must encode:
  - `00` no error
  - `01` insufficient credit
  - `10` product unavailable
  - `11` both conditions
- For 3-student groups, returned coin counts must match the exact emitted change and respect coin availability.

## Structural design guidance
The structural version must look like a real structural project, not like disconnected sketches.

### Preferred architecture
Use:
- one controller FSM
- one main datapath
- supporting structural submodules

### Strong recommendation
Keep shared state in central registers, not hidden inside random state modules.

Typical central registers:
- product quantities
- product prices
- inserted credit
- selected product
- available coin counters
- computed change
- error code
- emitted coin counters

### State partitioning
If helper modules named `S0`, `S1`, `S2`, `S3` are used, treat them as datapath helpers for phases, not as isolated machines with their own hidden truth.

The controller FSM must remain the single source of truth for:
- current phase
- register write enables
- mux select signals
- output pulse timing

## Bit-width policy
Be strict.

- Do not use 3-bit credit or 3-bit prices if the spec requires 6-bit values.
- `credito` and `resto` must be handled as 6-bit values.
- `{coin, selezione}` during configuration is 6 bits.
- `disponibile` must be 10 bits.
- Coin counters and product counters must have widths consistent with the assignment.

When in doubt, choose widths that satisfy the specification, not the old experimental code.

## Coding rules
- Use Verilog that is compatible with common student tools (`iverilog`, `verilator`) unless the repository already standardizes something else.
- Sequential logic:
  - `always @(posedge clk or negedge rst)`
  - use non-blocking assignments `<=`
- Combinational logic:
  - `always @(*)`
  - use blocking assignments `=`
- Always assign default values in combinational blocks to avoid accidental latches.
- Keep module names and file names aligned.
- Prefer simple structural composition with explicit wires and enables.
- Prefer small reusable modules over giant tangled blocks.
- Avoid dead code and commented-out logic in final files unless a comment explains a real design choice.

## What not to do
- Do not preserve broken placeholder modules such as empty datapath shells.
- Do not keep obsolete `.vcd`, `obj_dir`, or generated junk in the repository.
- Do not rely on handwritten notes or screenshots as authoritative behavior if they conflict with the specification.
- Do not encode error handling as a single boolean if the spec requires `errore[1:0]`.
- Do not compute change with unclear sign tricks if a direct and verifiable subtraction path is cleaner.
- Do not hide state updates inside unrelated helper modules without a visible enable strategy.

## Behavioral version policy
The behavioral version is the golden reference.

- Preserve behavioral correctness.
- Do not rewrite the behavioral version unless necessary to align interfaces with the specification or fix a verified bug.
- Structural work must converge toward behavioral equivalence.

## Comparison policy
The repository must eventually support:
- behavioral simulation
- structural simulation
- comparison between the two

The comparison testbench should fail loudly on mismatches.

## Validation checklist
After making changes, run as many of these checks as the environment supports.

### Basic file sanity
- verify required top modules exist
- verify there are no duplicate module names
- verify there are no empty placeholder modules
- verify include paths are valid

### Lint / compile
Run available commands such as:
- `verilator --lint-only behavioral/vending_behavioral.v`
- `verilator --lint-only structural/vending_structural.v`
- `iverilog -g2012 -o /tmp/tb_beh behavioral/tb_behavioral.v`
- `iverilog -g2012 -o /tmp/tb_struct structural/tb_structural.v`
- `iverilog -g2012 -o /tmp/tb_cmp testbench.v`

If the compile flow relies on additional included files, include them explicitly.

### Simulation
If testbenches compile, run them.
Examples:
- `vvp /tmp/tb_beh`
- `vvp /tmp/tb_struct`
- `vvp /tmp/tb_cmp`

### Required test intent
At minimum, verify:
- 12-cycle configuration phase works
- valid coin accumulation works
- valid purchase emits the right product
- insufficient credit emits correct error
- unavailable product emits correct error
- combined error emits `11`
- cancel returns credit as change
- change calculation is correct
- exact coin emission is correct if required by the group size

## Change strategy
When fixing the code:
1. First fix interfaces and widths
2. Then fix shared registers and write-enable strategy
3. Then fix controller/datapath separation
4. Then fix error handling
5. Then fix change logic
6. Then clean the build/test flow
7. Only after that, do cosmetic cleanup

## Commit policy
If files are modified:
- keep commits focused and descriptive
- do not mix unrelated refactors with functional fixes
- summarize what was fixed in terms of specification compliance

## Final quality bar
A patch is not done unless:
- the repository structure is closer to assignment compliance
- interfaces match the specification
- structural logic is coherent
- key checks were run
- remaining limitations are explicitly stated
## Sources of truth
Use these sources in this priority order:

1. Professor project specification PDF
2. This `AGENTS.md`
3. Provided course PDFs about Verilog, RTL, controller/datapath design, and component library
4. Existing behavioral implementation as golden functional reference
5. Existing structural code
6. Handwritten sketches, CircuitVerse drafts, and screenshots

If sources conflict:
- follow the professor specification PDF first
- then follow `AGENTS.md`
- then use the course PDFs for implementation style and architecture guidance

Do not preserve behavior from sketches, screenshots, or old experimental modules if it conflicts with the professor specification or the PDFs.