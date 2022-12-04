#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
    return 1;
    }
    else
     return fact(n-1)*n;

}
int main()
{   
    int a;
    int b;
    cout<<"enter a number"<<endl;
    cin>>a;
    b = fact(a);
    cout<<"Product = "<<b<<endl;
    return 0;
}