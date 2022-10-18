// this is all about indirect recurssion
// there are two functions that call eachother to making an indirect recursion
#include<iostream>
using namespace std;
void funB(int n);

void funA(int n)
{
    if(n>0)
    {
        cout<<"from function A - "<<n<<endl;
        funB(n-1);

    }
}

void funB(int n)
{
  if(n>1)
  {
   cout<<"from function B - "<<n<<endl;
   funA(n/2);
  }
}


int main()
{   
    int a;
    cout<<"enter a number";
    cin>>a;
    funA(a);
    return 0;
}