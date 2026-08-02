`timescale 1ns / 1ps

////////////////////////////////////////////////////////

module test;

	// Inputs
	reg In;
	reg clk;

	// Outputs
	wire [3:0] C;

	// Instantiate the Unit Under Test (UUT)
	Counter uut (
		.In(In), 
		.clk(clk), 
		.C(C)
	);

	initial clk = 0;
always begin
clk = ~clk;
 #10;
   end



	initial begin
		// Initialize Inputs
		In = 1;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

