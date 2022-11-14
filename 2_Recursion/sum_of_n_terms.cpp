#include<iostream>
using namespace std;

int sum(int n)
{ 
  //int a ;
    
    if(n == 0)
    {
       return 0;
       
    }
    else
     return sum(n-1) + n;
    
}


int main()
{   
    int n;
    int s;
    cout<<"enter a number"<<endl;
    cin>>n;
    s =sum(n);
    cout<<"sum = "<<s<<endl;
    return 0;
}