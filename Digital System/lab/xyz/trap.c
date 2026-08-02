//sudhu even intervel a kaj korbe
#include<stdio.h>
#include<math.h>

float func(float x)
{
    return 1/(x*x+1);
}



int main()
{
    float a,b,h,n,sum=0,x;
    printf("Enter the lower limit=>");
    scanf("%f", &a);
    printf("Enter the upper limit=>");
    scanf("%f", &b);
    printf("Enter no of sub interval=>");
    scanf("%f", &n);


    h=(b-a)/n;


    for(int i=1; i<n; i++)
    {
        x=a+i*h;
        sum=sum+func(x);

    }
    sum=h/2*(func(a)-func(b)+2*sum);
    printf("\n Area is: %f\n",sum);

    return 0;
}
