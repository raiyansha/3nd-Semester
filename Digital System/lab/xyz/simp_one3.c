/*even intrvels only*/
#include<stdio.h>
#include<math.h>

float func(float x)
{
    return 1/(x*x+1);
}



int main()
{
    int i;
    float a,b,h,n,sum=0,x;
    printf("Enter the lower limit=>");
    scanf("%f", &a);
    printf("Enter the upper limit=>");
    scanf("%f", &b);
    printf("Enter no of sub interval=>");
    scanf("%f", &n);


    h=(b-a)/n;


    for(i=1; i<n; i++)
    {
        x=a+i*h;

        if(i%2==0){
            sum=sum+2*func(x);
        }else{
            sum=sum+4*func(x);
        }

    }


    sum=h/3*(func(a)+func(b)+sum);
    printf("\n Area is: %f\n\n",sum);

    return 0;
}
