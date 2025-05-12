#include "obj_dir/Vumips_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <unistd.h>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Create instance of the Verilog top module (umips_top)
    Vumips_top* uut = new Vumips_top;

    // Create a trace object for waveform output
    VerilatedVcdC* tfp = new VerilatedVcdC;
    uut->trace(tfp, 99);  // Set the trace level (99 is usually a good level)
    tfp->open("umips_top_wave.vcd");  // Open the VCD file to dump waveforms

    // Initialize signals
    uut->clk = 0;
    uut->reset = 1;

    // Simulation loop (e.g., run for 200ns)
    for (int i = 0; i < 200; i++) {
        // Toggle the clock
        uut->clk = !uut->clk;

        // Apply reset logic
        if (i == 5) {
            uut->reset = 0; // Release reset at 5ns
        }

        // Evaluate the design
        uut->eval();

        // Dump the waveform
        tfp->dump(i);  // Dump the waveform at each simulation step

        // Simulation delay (10ns per clock cycle)
        if (uut->clk) {
            usleep(10); // Sleep for 10 microseconds
        }
    }

    // Close the trace file after the simulation
    tfp->close();

    // End simulation
    delete uut;
    delete tfp;
    return 0;
}