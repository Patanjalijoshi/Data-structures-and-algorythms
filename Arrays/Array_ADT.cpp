// All the operations that are going to be done on arrays are going to be done in this program



#include<iostream>
using namespace std;

struct array
{
    int *A;
  //  int A[10];
    int size;
    int length;
};

// function to display all the elements in an array
void Display(struct array arr)
{  cout<<"the elements in the array are"<<endl;
    for(int i = 0; i<arr.length; i++)
    {
        
        cout<<arr.A[i]<<"\t";
    }
}


int main()
{ 
    // initialsising an array 
    int n, i;
    struct array arr;
    // struct array arr = {{1,2,3,4,5},20,5};  // pre defined array 
    
    cout<<"enter the size of the array"<<endl;
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;


    // storing an array
    cout<<"Enter the number of numbers"<<endl;
    cin>>n;
    
    // storing elements into an array
    cout<<"Enter the elements"<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;

    Display(arr);
    return 0;
}