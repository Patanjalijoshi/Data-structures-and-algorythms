// initialising an arrays static and dynamic
#include<iostream>
using namespace std;
int main()
{  
    int A[] = {1,2,3,4,5,6}; 
    for(int x: A)                    // for each loop
    {
        cout<<x<<endl;
    }
    
    cout<<"\n";
    // dynamicall allocating for an array 
    int *p;

    p = new int[5];   // array is created in heap
    for(int i = 0; i < 5; i ++)
    {
       p[i] = i;
    }

   for(int x = 0; x < 5; x ++)
    {
       cout<<p[x]<<endl;
    }
    

    
    return 0;
}