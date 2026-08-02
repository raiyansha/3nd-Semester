`timescale 1ns / 1ps
////////////////////////////////////////
module jk_FF(j,k,clk,q,qb);

input j,k,clk;
output reg q=0,qb=1;

always@(posedge clk)begin
case({j,k})
2'b 00:q = q;
2'b 01:q = 1'b 0;
2'b 10:q = 1'b 1;
2'b 11:q = ~q;
endcase
qb = ~q;
end

endmodule

