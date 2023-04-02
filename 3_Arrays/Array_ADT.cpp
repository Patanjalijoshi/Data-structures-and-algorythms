// All the operations that are going to be done on arrays are going to be done in this program



#include<iostream>
using namespace std;

struct array
{
  int *A;
  int size;
  int length;
};

// function to display all the elements in an array
void Display(struct array arr)
{
  cout<<" The elements in the array are:"<<endl;
  for(int i = 0; i < arr.length; i++)
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
void Insert(struct array *arr, int index, int x )
{ 
  int i;
  if(arr->size > arr->length)
  {
    if(index >= 0 && index <= arr->length )
    {
      for( i = arr->length; index<=arr->length; i-- )
      {
        arr->A[i] = arr->A[i-1];
      }
      arr->A[i] = x;
      arr->length++;
    }
    else
    {
      cout<<"index out of range"<<endl;
    }
  }
  else
  {
    cout<<"insufficient size"<<endl;
  }
}

//deletinon from an array
int Delete( struct array *arr, int index )
{
   int x = 0 ;
   if(index > 0 && index < arr->length)
   {
    x = arr->A[index];
   for(int i = index; i < arr->length-1; i++)
   {
     arr->A[i] = arr->A[i+1];
   }
   return x; // x will be retturned if the condition is true 
   }
   return 0; // if the condition is false then 0 is returned  because no element will be deleted
}
int linearsearch(struct array *arr, int search)
{
 
  for(int i = 0; i < arr->length; i++)
  {
    if(arr->A[i] == search)
    {
      return i;
    }
    

  }
  return -1;
}


int main()
{ 
    // initialising an array 
    int n, i;
    int append = 10;
    int index = 4;
    int x = 30;
    int search, result;
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
    
    // calling display function
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

    //calling the delete function 
    cout<<"\n"<<Delete(&arr, index);
    cout<<"\nArray after deleting the element"<<endl;
    Display(arr);

    //performing linear search in an array
    cout<<"\n the element that needs to be searched";
    cin>>search;
    result = linearsearch(&arr,search);
    if(result >= 0)
    {
      cout<<"\n Element is found at "<<result;
    }
    else
    {
      cout<<"\n Element not found";
    }

    return 0;
}