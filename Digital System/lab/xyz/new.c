#include<stdio.h>
#include<math.h>

float function(float x)
{
    return x*x+2*x-2;
}

float d_function(float x)
{
    return 2*x+2;
}


int main()
{
    float x=2;
    int i;
    for(i=0; i<20; i++)
    {
        x=x-(function(x)/d_function(x));

        printf("iteration: %d=%f\n",i+1,x);
    }

}
