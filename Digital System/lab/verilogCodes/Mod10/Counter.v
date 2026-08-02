`timescale 1ns / 1ps
module Counter(In,clk,C);
	input In,clk;
	output [3:0]C;
	wire [3:0]Qp;
	wire Rst;
	and#(0.01)A1(Rst,C[0],C[1],C[3]);
	TFF T0(In,clk,Rst,C[0],Qp[0]);
	TFF T1(In,Qp[0],RSt,C[1],Qp[1]);
	TFF T2(In,Qp[1],RSt,C[2],Qp[2]);
	TFF T3(In,Qp[2],RSt,C[3],Qp[3]);

endmodule
 
 
 module TFF(Tin,clk,Rst,Q,Qp);
 
 input Tin,clk,Rst;
 output reg Q;
 output Qp;
 
 initial Q = 0;
 assign Qp = ~Q;
 
 always @ (posedge clk or posedge Rst)
 
 begin
      if(Rst)
	  Q=0;		
	else if(Tin)	
	   Q=~Q;	
	else
	  Q=Q;		
	end
endmodule 



