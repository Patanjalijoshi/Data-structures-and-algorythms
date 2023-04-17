#include<iostream>
using namespace std;
struct array
{
    int a[15] = {1,2,3,4,5,6,8,9,10,11};
    int length = 10;
}arr;
void arrayissorted(struct array *arr)  
{   
    int flag = 0;
    if(arr->a[0] < arr->a[1])
    {
        //checking for an ascending order
        for(int i = 0 ; i < arr->length - 1; i++)
        {
            if(arr->a[i+1] < arr->a[i])
            { 
                cout<<"The array is not sorted"<<endl;
                break;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
    {
        cout<<"The array is sorted"<<endl;
    }


}
void insert(struct array *arr, int key)
{
    for(int i = arr->length - 1; i >= 0; i--)
    {
        if(arr->a[i] >= key )
        {
            arr->a[i+1] = arr->a[i];
        }
        else if(arr->a[i] <= key)
        {
            arr->a[i+1] = key;
            break;
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
int main()
{   
    arrayissorted(&arr);
    insert(&arr, 7);
    print(&arr);
    return 0;
}