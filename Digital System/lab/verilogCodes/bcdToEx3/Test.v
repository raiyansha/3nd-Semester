`timescale 1ns / 1ps

////////////////////////////////////////////////////

module Test;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire [3:0] wxyz;

	// Instantiate the Unit Under Test (UUT)
	BcdToEx3 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.wxyz(wxyz)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 1;
		c = 0;
		d = 1;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

