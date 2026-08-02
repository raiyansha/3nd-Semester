`timescale 1ns / 1ps


module test;


	reg clk;
	reg reset;

	wire [3:0] count;
	integer i;

	Upcounter uut (
		.clk(clk), 
		.reset(reset), 
		.count(count)
	);

	initial begin
	    clk = 0;
		 reset =1;
		
		for(i=0;i<=32;i=i+1)
		#20 clk = ~clk;
		
	end
	initial 
	#800 $finish;
	
      
endmodule

