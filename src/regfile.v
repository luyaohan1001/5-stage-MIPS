`timescale 1ns/1ns

module regfile(
    input Clk, Write,
    input Reset,
    input [4:0] PR1, PR2, WR,
    input [31:0] WD,
    output [31:0] RD1, RD2
);

    reg [31:0] rf[31:0];  // 32 registers of 32-bits each
    integer i;

    // Initialize regfile at reset
    always @(posedge Clk or posedge Reset) begin
        if (Reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                rf[i] <= 32'd0;  // Non-blocking assignment for reset
            end
        end else begin
            if (Write && WR != 0) begin  // Write only if WR is not 0
                rf[WR] <= WD;  // Non-blocking assignment for writing
            end
        end
    end

    // Read logic: handle $zero register behavior (always 0)
    assign RD1 = (PR1 == 5'b0) ? 32'b0 : rf[PR1];
    assign RD2 = (PR2 == 5'b0) ? 32'b0 : rf[PR2];

endmodule
