#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
}

int main()
{   
    int a;
    a = fib(10);
    cout<<a<<endl;
    return 0;
}