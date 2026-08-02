`timescale 1ns / 1ps


module test;

	reg [3:0] a;
	reg [3:0] b;
	reg cin;

	wire [3:0] s;
	wire cout;

	
	addsub uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		
		a = 5;
		b = 5;
		cin = 0;
		#100;
		a = 3;
		b = 2;
		cin = 0;
		#100;
      a = 5;
		b = 3;
		cin = 0;
		#100;
      a = 5;
		b = 5;
		cin = 1;
		#100;
		a = 3;
		b = 2;
		cin = 1;
		#100;
      a = 5;
		b = 3;
		cin = 1;
		#100;
          
      
	

	end
      
endmodule

