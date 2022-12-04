#include<iostream>
using namespace std;
 // there are two methods for finding the combination
// method one
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
 
 
 int comb(int n, int r)
 {
    return fact(n)/(fact(r)*fact(n-r));
 }

int main()
{   
    int a, b;
    cout<<"Enter n and r to find the combination"<<endl;
    cin>>a;
    cin>>b;
    cout<<comb(a,b);

    return 0;
}