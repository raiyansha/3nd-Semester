`timescale 1ns / 1ps

module HA(A,B,SUM,CARRY);

input A,B;
output SUM,CARRY;

xor x1 (SUM,A,B);
and a1 (CARRY,A,B);

endmodule
