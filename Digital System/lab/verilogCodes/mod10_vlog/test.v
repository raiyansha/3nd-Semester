module test;

  // Inputs
  reg clk;
  reg reset;

  // Outputs
  wire [3:0] out;

  // Instantiate the Unit Under Test (UUT)
  counter uut (
    .out(out),
    .clk(clk),
    .reset(reset)
  );

  initial begin
    clk = 1'b1;
    forever #5 clk = ~clk;
  end

  initial begin
    reset = 1;
    #10 reset = 0;
  end

endmodule




