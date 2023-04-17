#include<iostream>
using namespace std;

int a[10] = {1,2,3,4,5,7,8,9,10,11};

void element()
{
   for(int i = 0; i < 10; i++)
   {
      if((i+1) != a[i])
      {
        cout<<"the missing element in the array is "<<i+1;
        break;
      }
   }
}
int main()
{  
    element();
    return 0;
}