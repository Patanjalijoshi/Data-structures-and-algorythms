// this an arrays size is going to vbe increased 
// the sizew of an array cannot be increased so an alternate array needs to be made with a greater size

#include<iostream>
using namespace std;
int main()
{  
    int *p;
    int *q;
    
    p = new int[5];
     for(int i = 0; i < 5; i ++)
    {
       p[i] = i;
    }

    // to increase the size of p the below steps are followed
    q = new int[10];   // array of size 10 is created and the elements of p are copied into it
     
     for(int i = 0 ; i<5; i++)
     {
        q[i] = p[i];
     }
     // the old array is deleted
     delete []p;
     // no the pointer p is made to point at the same location as that of q

     p = q;

     // q pointer is removed by making it point to null

     q = NULL;

    
    return 0;

    // put breakpoints and check theb working of the code
}