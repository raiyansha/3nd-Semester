module counter(
  output reg [3:0] out,  // Output of the counter
  input clk,            // Clock input
  input reset           // Reset input (active high)
);

  always @(posedge clk) begin
    if (reset) begin
      out <= 4'b0;
    end else if (out < 9) begin
      out <= out + 1;
    end else begin
      out <= 4'b0;
    end
  end

endmodule