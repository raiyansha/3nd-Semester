`timescale 1ns / 1ps
///////////////////////////////////////////////////////
module MUX(I0,I1,I2,I3,s,out);

input I0,I1,I2,I3;
input [1:0]s;
output out;

wire [1:0]sn;
wire [3:0]A0;

not n0 (sn[0],s[0]);
not n1 (sn[1],s[1]);

and a0 (A0[0],I0,sn[0],sn[1]);
and a1 (A0[1],I1,s[0],sn[1]);
and a2 (A0[2],I2,sn[0],s[1]);
and a3 (A0[3],I3,s[0],s[1]);

or o (out,A0[0],A0[1],A0[2],A0[3]);

endmodule
