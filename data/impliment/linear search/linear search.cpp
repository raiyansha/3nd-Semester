#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[5]={12,23,34,14,3};
    cout<< "enter a number:";
    int n,t=1;
    cin >>n;
    for(int i=0;i<5;i++)
    {
        if(A[i]==n){
        cout<< "yes, this is hare";
        t=0;
        break;
        }

    }
    if(t==1)
    {
        cout<< "no ,this is not hare";
    }
    getch();
}
