`timescale 1ns / 1ps
/////////////////////////////////

module Test;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire CARRY;
	wire SUM;

	// Instantiate the Unit Under Test (UUT)
	fa uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.CARRY(CARRY), 
		.SUM(SUM)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 1;
		B = 0;
		Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A = 1;
		B = 1;
		Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

