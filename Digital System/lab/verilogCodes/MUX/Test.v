`timescale 1ns / 1ps

////////////////////////////////////////////////////

module Test;

	// Inputs
	reg I0;
	reg I1;
	reg I2;
	reg I3;
	reg [1:0] s;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.I0(I0), 
		.I1(I1), 
		.I2(I2), 
		.I3(I3), 
		.s(s), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		I0 = 0;
		I1 = 0;
		I2 = 0;
		I3 = 0;
	    #100;
		// Wait 100 ns for global reset to finish
	
        end
		always begin
		#10;
		I0 = ~I0;
		#2;
	    end
		 
		always begin 
		#10;
		I1 = ~I1;
		#4;
	    end
		 always begin 
		#10;
		I2 = ~I2;
		#10;
	    end
		 always begin 
		#10;
		I3 = ~I3;
		#15;
	    end
		 
		 initial begin
		 s = 2'b00;
		 #100;
		 s = 2'b01;
		 #100;
       s = 2'b10;
		 #100;
		 s = 2'b11;
		 #100;
		 end
		 
endmodule

