`timescale 1ns / 1ps

//////////////////////////////////////////////////

module Test;

	// Inputs
	reg [3:0] B;

	// Outputs
	wire [3:0] G;

	// Instantiate the Unit Under Test (UUT)
	BcdToGray uut (
		.B(B), 
		.G(G)
	);

	initial begin
		// Initialize Inputs
		B = 4'b0000;
		#10;

		// Wait 100 ns for global reset to finish
		B = 4'b0010;
		#10;
		B = 4'b1010;
        #10;
		// Add stimulus here

	end
      
endmodule

