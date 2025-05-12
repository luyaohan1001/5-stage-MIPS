`timescale 1ns/1ns

module branch_target_predictor_buffer(
    input clk,
    input reset,  // Added reset signal to initialize the entries
    input [31:0] branching_addressF,
    input access,
    input update,         // update enables write to the branch buffer
    input [31:0] branchUpdatePC,
    input [31:0] branchUpdateTarget,
    output found,
    output [31:0] predictPC,
    output reg [1:0] state
);

/*
The entries should have #rows of PC/4 because PC is incremented in 4
    should have #columns of 3
        [33:32]: state (prediction state bit)
        [31:0] : predictPC
        [49:34] : *DEBUG* signal, stores the lower 16 bits of PC
*/
reg [33:0] entries [63:0];  // 33 bits * 64 rows

parameter N = 2'b00;
parameter NT = 2'b01;
parameter TN = 2'b10;
parameter T = 2'b11;

// Entry address logic
wire [5:0] entry_addr = update ? (branchUpdatePC[7:0] >> 2) : (branching_addressF[7:0] >> 2);

// Predict the PC based on the entries
assign predictPC = (access) ? entries[entry_addr][31:0] : 32'b0;
assign found = (entries[entry_addr][31:0] != -1) && access;

always @(posedge clk or posedge reset) begin
    if (reset) begin
        // Reset logic: initialize all entries
        integer i;
        for (i = 0; i < 64; i = i + 1) begin
            entries[i] <= -34'd1;  // Initialize all entries to -1 (invalid)
        end
    end else begin
        // Update the state machine if the update signal is active
        if (update) begin
            case (entries[entry_addr][33:32])
                N: begin
                    if (found)
                        entries[entry_addr][33:32] <= NT;
                    else
                        entries[entry_addr][33:32] <= N;
                end
                NT: begin
                    if (found)
                        entries[entry_addr][33:32] <= TN;
                    else
                        entries[entry_addr][33:32] <= N;
                end
                TN: begin
                    if (found)
                        entries[entry_addr][33:32] <= T;
                    else
                        entries[entry_addr][33:32] <= NT;
                end
                T: begin
                    if (found)
                        entries[entry_addr][33:32] <= T;
                    else
                        entries[entry_addr][33:32] <= TN;
                end
            endcase
        end

        // Write to the branch buffer if update signal is active
        if (update) begin
            entries[entry_addr][31:0] <= branchUpdateTarget; // Enter branch target address
        end

        // Assign the state for umips_top (for flush detection in top-level design)
        state <= entries[entry_addr][33:32];
    end
end

endmodule
