// finding the power using recursion

#include<iostream>
using namespace std;

// method one
// int pow(int m, int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     return pow(m,n-1)*m;
// }

//second method which is faster
int pow(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n%2 == 0)
    {
    return pow(m*m,n/2);
    }
    else
    {
     return m* pow(m*m, (n-1)/2);
    }
}



int main()
{   
    int e;
    int b;
    int p;
    cout<<"enter the base and the power "<<endl;
    cin>>b;
    cin>>e;
    p = pow(b,e);
    cout<<b<<" raised to the power of "<<e<<" = "<<p<<endl;

    return 0;
}