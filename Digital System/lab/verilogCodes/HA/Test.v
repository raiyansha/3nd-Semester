`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire SUM;
	wire CARRY;

	// Instantiate the Unit Under Test (UUT)
	HA uut (
		.A(A), 
		.B(B), 
		.SUM(SUM), 
		.CARRY(CARRY)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		A = 1;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

