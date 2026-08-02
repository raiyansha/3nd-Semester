`timescale 1ns / 1ps

////////////////////////////////////

module test;

	// Inputs
	reg j;
	reg k;
	reg clk;

	// Outputs
	wire q;
	wire qb;
	

	// Instantiate the Unit Under Test (UUT)
	jk uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.q(q), 
		.qb(qb), 
		.()
	);

	initial begin
		// Initialize Inputs
		j = 0;
		k = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

