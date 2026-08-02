#include<stdio.h>
#include<math.h>


float func (float x, float y)
{
    return x*x*x+y;
}
int main()
{
    float a,b,x,y,h,t;
    printf("Enter the value of x0, y0, h and xn=>");
    scanf("%f%f%f%f", &a,&b,&h,&t);

      x=a;
      y=b;


while(x<t)
{

   y=y+h*func(x,y);
   x=x+h;

   printf("x=%f\t y=%f\n",x,y);
}
return 0;

}
