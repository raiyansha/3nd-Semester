`timescale 1ns / 1ps

module Test;

	// Inputs
	reg A0;
	reg A1;
	reg A2;
	reg A3;
	reg B0;
	reg B1;
	reg B2;
	reg B3;
	reg Cin;

	// Outputs
	wire S0;
	wire S1;
	wire S2;
	wire S3;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	FA4 uut (
		.A0(A0), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.B0(B0), 
		.B1(B1), 
		.B2(B2), 
		.B3(B3), 
		.Cin(Cin), 
		.S0(S0), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A0 = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		B0 = 0;
		B1 = 0;
		B2 = 0;
		B3 = 0;
		Cin = 1;

		#100;
		
		A0 = 1;
		A1 = 1;
		A2 = 1;
		A3 = 0;
		B0 = 1;
		B1 = 1;
		B2 = 1;
		B3 = 0;
		Cin = 1;

		#100;
		
		A0 = 1;
		A1 = 1;
		A2 = 1;
		A3 = 1;
		B0 = 1;
		B1 = 1;
		B2 = 1;
		B3 = 1;
		Cin = 1;

		#100;
        

	end
      
endmodule

