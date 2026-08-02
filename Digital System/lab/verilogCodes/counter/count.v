`timescale 1ns / 1ps
///////////////////////////////////////////////////////
module count( ja,ka,jb,kb,jc,kc,qa,qb,qc,CLK);
input ja,jb,jc,ka,kb,kc,CLK;
output reg qa,qb,qc;

and a1 (ja,~qb,qc);
and a2 (jb,qa,qc);
or o1 (kc,qb,qa);

always@(posedge CLK) begin
jk_FF jk1 (qa,~qa,a1,qc);
jk_FF jk2 (qb,~qb,a2,~qc);
jk_FF jk2 (qc,~qc,~qb,o1);

end

endmodule


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

