`timescale 1ns / 1ps


module test;

	
	reg [3:0] B;

	
	wire [3:0] G;

	
	bcd_to_gray uut (
		.B(B), 
		.G(G)
	);

	initial begin
		
		B = 4'b0000 ;
		#100;
       B = 4'b0001 ;
		#100;
		B = 4'b0010 ;
		#100;
		B = 4'b0011 ;
		#100;
		B = 4'b0100 ;
		#100;
		B = 4'b0101 ;
		#100;
		B = 4'b0111 ;
		#100;		
		

	end
      
endmodule

