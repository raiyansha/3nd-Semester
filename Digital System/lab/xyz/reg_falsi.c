/*  Exp.No 2: Regular-Falsi Method (Finding the roots of given Equ.) */
#include<stdio.h>
#include<math.h>

#define f(x)  x*x*x-2*x-5
int main()
{
  float x0,x1,x2, y0,y1,y2, e;
  int maxitr,i;

  printf("Enter two initial starting roots \n");
  scanf("%f%f",&x0,&x1);

  printf("Enter maximum iteration \n");
  scanf("%d",&maxitr);

  printf("Enter the tolerance value \n");
  scanf("%f",&e);

  y0 = f(x0);
  y1 = f(x1);
  if (y0*y1 > 0.0)
     printf("Initial roots are unsuitable \n");
  else
      for(i=1;i<=maxitr;i++)
      {
      x2 = (x0*y1-x1*y0)/(y1-y0);
      y2 = f(x2);
      if (fabs(y2) < e)
      {
          printf("\nsolution is converge \n");
          printf("\nRoot of the given equ.is = %9.4f\n",x2);
          maxitr=i;
      }
      else if(y2*y0 < 0)
           {
           x1=x2;
           y1=y2;
           }
           else
           {
           x0 = x2;
           y0 = y2;
           }
      }
      return 0;
}
