#include<iostream>
using namespace std;
struct array
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
}arr;

void reverse(struct array *arr)  // the oder of this function is 2n
{ 
    int i = 0;
    int j = arr->length - 1;
    int b[10];
  while(i < arr->length)
  {
    b[i] = arr->a[j];

    j--;
    i++;
  } 
  for(i = 0; i < arr->length; i++)
  {
     arr->a[i] = b[i];
  }  
  
}
void reversesamearray(struct array *arr) //in this function the order of the function is n and there is no need for another array to be created
{   int i;
    int j;
    int a;
    if( i <= j)
    for( i = 0, j = arr->length - 1; i < arr->length; i++, j--)
    { 
       if( i <= j)
       {
        a = arr->a[i];
        arr->a[i] = arr->a[j];  
        arr->a[j] = a;
       }
    }
}
void print(struct array *arr)
{    
    cout<<"\n";
    for(int i = 0; i < arr->length ; i++)
    {
        cout<<arr->a[i]<<" ";
    }
}
void leftshift(struct array *arr)
{
    for( int i = 1; i < arr->length; i++)
    {
        arr->a[i-1] = arr->a[i];
        arr->a[arr->length - 1] = 0;
    }
}
void leftrotate(struct array *arr)  //figure oyt how to fix the segmentatin fault
{  
    int a;

    for( int i = 0; i < arr->length; i++)
    {   
        a = arr->a[i];
        arr->a[i-1] = arr->a[i];
        arr->a[arr->length - 1] = a;
    }
}
int main()
{   
    
    reverse(&arr);
    print(&arr);
    reversesamearray(&arr);
    print(&arr);
    leftshift(&arr);
    print(&arr);
    leftrotate(&arr);
    print(&arr);
    return 0;
}
