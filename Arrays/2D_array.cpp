//2D arrays are actually stored as 1D arrays in computers just that they can be accessed using two values 

// There are two methods to declare a 2D array 
#include<iostream>
using namespace std;
int main()
{ 

int A[2][2] = {{1,2},{3,4}};

// the other mmethod declare a 2D array uses pointers 

int *B[2];
// now to make it 2D in nature the memory is assigned in heap 
B[0] = new int[2];
B[1] = new int[2];

// this allocates memory in the heap creating a 2D array with 2 rows and 2 columns


// Creating 2D array with a double pointer which ccreates the entier array in heap

int **C;

C = new int*[3];

C[0] = new int[3];
C[1] = new int[3];
C[2] = new int[3];

    
    
    return 0;
}
