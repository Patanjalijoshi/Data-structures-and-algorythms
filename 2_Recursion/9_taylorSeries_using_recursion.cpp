#include<iostream>
using namespace std;

float taylor(int x, int n)
{   
    static double p =1, f=1;
    int r;
    if(n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x, n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}


int main()
{  
    float r = taylor(3,10);
    cout<<r<<endl;
    return 0;
}