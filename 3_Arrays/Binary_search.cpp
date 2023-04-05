#include<iostream>
using namespace std;
int binarysearch(int *x,  int element, int h, int l)
{   
   
    int m;
    
    while(l <= h)
    {
        m = (l+h)/2;
        if(x[m]==element)
        {
            return m;
        }
        else if(x[m]>element)
        {
            h = m -1;
        }
        else if(x[m]<element)
        {
            l = m+1;
        }
    }
    return -1;
}
int recurssion_binarysearch(int *array,  int element, int h, int l)
{   int mid;
    if(l <= h)
    { 
        mid = (l + h)/2;
        if(array[mid] == element)
        {
            return mid;
        }    
        else if(element < array[mid])
        {
            recurssion_binarysearch(array, element, mid-1, l);
        }
        else if(element > array[mid])
        {
             recurssion_binarysearch(array, element, h, mid+1);
        }
        else
        {
            return -1;
        }
          
    }
   
}



int main()
{   int *array; 
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,15,18,22}; //sorted array
    array = a;
    int result2,key;
    int result;
    cout<<"Enter an element to be searched"<<endl;
    cin>>key;
    //result = binarysearch(array, key, sizeof(a)/4 - 1, 0);
    result2 = recurssion_binarysearch(array, key, sizeof(a)/4 -1, 0); 
    if(result2 >= 0)
    {
        cout<<"\nThe element was found at "<<result2<<" index"<<endl;
    }
    else
    {
       cout<<"\nElement is not present"<<endl;
    }
    return 0;
}