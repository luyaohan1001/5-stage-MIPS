`timescale 1ns/1ns

module mult(
    input clk,
    input start,
    input in_is_signed,
    input [31:0] in_a, in_b,
    output reg mult_status,
    output reg [63:0] s
);

    always @(posedge clk) begin
        if (start) begin
            // Perform signed multiplication if in_is_signed is 1
            if (in_is_signed) begin
                s <= $signed(in_a) * $signed(in_b);  // Signed multiplication
            end else begin
                s <= in_a * in_b;  // Unsigned multiplication
            end
            mult_status <= 1'b0;  // Set status to finish after one cycle
        end else begin
            mult_status <= 1'b1;  // Indicate that multiplication is not active
        end
    end
endmodule

