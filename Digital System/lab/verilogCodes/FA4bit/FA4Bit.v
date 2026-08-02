`timescale 1ns / 1ps

module FA4Bit(A0,A1,A2,A3,B0,B1,B2,B3,Cin,S0,S1,S2,S3,Cout);

input A0,A1,A2,A3,B0,B1,B2,B3,Cin;
output S0,S1,S2,S3,Cout;

wire C1,C2,C3;

FA fa0 (A0,B0,Cin,S0,C1);
FA fa1 (A1,B1,C1,S1,C2);
FA fa2 (A2,B2,C2,S2,C3);
FA fa3 (A3,B3,C3,S3,Cout);

endmodule 