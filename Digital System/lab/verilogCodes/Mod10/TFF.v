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


