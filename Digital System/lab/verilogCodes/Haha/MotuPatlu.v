`timescale 1ns / 1ps

module addsub(a,b,cin,s,cout);

input [3:0] a,b;
input cin;

output [3:0]s;
output cout;
wire [3:0]t;

assign t = b^{4{cin}};  
assign {cout,s} = a+t+cin;
 

endmodule
