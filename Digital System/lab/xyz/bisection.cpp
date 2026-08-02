#include<iostream>
using namespace std;


float a,b,x,f;

void Bisection(float a, float b)
{
    x=(a+b)/2.0;
    for(int i=0; i<20; i++)
    {
        f=(x*x*x)-(2*x*x)+3;
        if(f<0){
            a=x;
        } 
        else{
            b=x;
        }
    x=(a+b)/2;    

    }
}
int main()
{
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;

   Bisection(a,b);
   cout<<"The root is:"<<x<<endl;

   return 0;

}
