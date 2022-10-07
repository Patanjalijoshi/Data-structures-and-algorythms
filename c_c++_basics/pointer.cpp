// Understanding pointers
// pointers basically a variable that holds the address of the variable
#include<iostream>
using namespace std;
int main()
{   
    int B[5] = {1,2,3,4,5};
    int *x;
    x = B; // there is no ned for '&' whicle creating a pointer to an array
    for(int i =0; i<5;i++){
        cout<<x[i]<<endl;
    }
    int a = 10;
    int *p;
    p = &a;
    cout<<"address of the variable a = "<<p<<endl;
    cout<<"the value stored at the address location "<<*p;
    return 0;
}