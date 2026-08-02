`timescale 1ns / 1ps

///////////////////////////////////////////////

module test;

	// Inputs
	reg j;
	reg k;
	reg clk;

	// Outputs
	wire q;
	wire qb;

	// Instantiate the Unit Under Test (UUT)
	jk_FF uut (
		.j(j), 
		.k(k), 
		.clk(clk), 
		.q(q), 
		.qb(qb)
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
	always begin 
	#10;
	clk = ~clk;
	end
      
endmodule

