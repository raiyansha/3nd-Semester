`timescale 1ns / 1ps

///////////////////////////////////////////////////////////////

module test2;

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
	);

	initial begin
		// Initialize Inputs
		j = 0;
		k = 0;
		clk = 0;
		#100;
		
		j = 0;
		k = 1;
		#100;
		
		j = 1;
		k = 0;
		#100;
		
		j = 1;
		k = 1;
		#100;
	end
	
	always #10 clk = ~clk;
endmodule

