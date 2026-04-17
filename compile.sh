#!/usr/bin/env bash
set -euo pipefail

mkdir -p build

if command -v verilator >/dev/null 2>&1; then
  verilator --lint-only -Wall -I. behavioral/vending_behavioral.v
  verilator --lint-only -Wall -I. structural/vending_structural.v
fi

iverilog -g2012 -I. -o build/tb_behavioral behavioral/tb_behavioral.v
vvp build/tb_behavioral

iverilog -g2012 -I. -o build/tb_structural structural/tb_structural.v
vvp build/tb_structural

iverilog -g2012 -I. -o build/tb_compare testbench.v
vvp build/tb_compare
