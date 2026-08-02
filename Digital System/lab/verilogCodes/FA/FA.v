`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
module fa(A,B,Cin,CARRY,SUM);

input A,B,Cin;
output CARRY,SUM;

wire X01,A01,A02;

xor x1 (X01,A,B);
xor x2 (SUM,X01,Cin);
and a1 (A01,A,B);
and a2 (A02,X01,Cin);

or o1 (CARRY,A01,A02);


endmodule
