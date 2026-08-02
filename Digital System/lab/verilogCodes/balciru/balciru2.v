`timescale 1ns / 1ps

module Upcounter(clk,reset,count );
input clk,reset;
output reg [3:0] count =4'b0000;



always @(posedge(clk)) 


begin
 if((reset==0) || (count == 4'b1001)) 
  count = 4'b0000;
 
 else count=count+4'b0001;
 end
 


endmodule
