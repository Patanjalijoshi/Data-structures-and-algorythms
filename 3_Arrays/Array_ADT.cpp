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

// function to add/append an array
void Append(struct array *arr, int x)  //pass by address if there are changes being made to the array
{ 
   if(arr->length< arr->size)
   { 
   // adding the element to the end of the array 
   arr->A[arr->length++] = x ;
   arr->length++;
   }
   else
   {
    cout<<"low size"<<endl;
   }

}

//function to insert an element at a given index
void Insert(struct array *arr, int index, int x)
{   
    int i;
if(arr->length< arr->size)             
{
      if(index >= 0 && index < arr->length)  // in order to insert the index should between the first and the last element of the array
      {
       for( i = arr->length; i > index; i--)
      {
        arr->A[i] = arr->A[i-1];
      }
    // Inserting the element in the empty space
       arr->A[i] = x;
       arr->length++;
       }
       else
       {
       cout<<"Index out of range"<<endl;
       }
} 
else
{
 cout<<"Insufficient size"<<endl;
}
}


int main()
{ 
    // initialsising an array 
    int n, i;
    int append = 10;
    int index = 4;
    int x = 30;
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
    
    // calling diaplay function
    cout<<"Elements present in the array"<<endl;
    Display(arr);
    
    //calling append function
    Append(&arr,append);
    cout<<"\nArray after appending"<<endl;
    Display(arr);
    

    // calling the insert function
    Insert(&arr, index, x);
    cout<<"\nArray after Inserting"<<endl;
    Display(arr);

    return 0;
}