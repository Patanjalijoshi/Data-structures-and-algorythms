#include<iostream>
#include<stdio.h>
using namespace std;

int fun(int n)
{
    if(n>100)
     return n-10 ;
    else
     return fun(fun(n+1)); 
}

int main()
{   
    int n;
    int r;
    cout<<"enter a number";
    cin>>n;
    r = fun(n);
    cout<<r<<endl;

    return 0;
}