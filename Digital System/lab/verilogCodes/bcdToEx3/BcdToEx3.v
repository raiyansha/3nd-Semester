module BcdToEx3(input a,b,c, d,output [3:0]wxyz);

assign wxyz[3] = (a | b&(c|d));
assign wxyz[2]= (b^(c|d));
assign wxyz[1] = (~(c^d));
assign wxyz[0] = ~d;

endmodule
