//understanding references
#include<iostream>
using namespace std;
int main()
{  
    int a = 10;
    int &r = a; // r is a reference to a 
    
    cout<<r<<"\n "<<a<<endl;
    r =20;
   // if the reference is assigned a value then the value of a also changes

    cout<<r<<" \n "<<a;
    cout<<"\n we see that the value of a and b remains the same";
    return 0;
}