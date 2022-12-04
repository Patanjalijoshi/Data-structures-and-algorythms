#include<iostream>
using namespace std;
double e(int x, int n)
{
    static double s = 1;
    if(n == 0)
    {
        return s;
        s = 1+x/n*s;
    }
    else
    {
        return e(x,n-1);
    }

}
int main()
{  
    double r = e(2,10);
    cout<<r<<endl;
    return 0;
}