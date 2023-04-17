#include<iostream>
using namespace std;
int linearsearch(int *a, int element)
{
    for(int i = 0; i < 10; i++)
    { 
        if(a[i] == element)
        {
            return i;
            break;
        }      
    }
    return -1;
}
int main()
{  
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int result = linearsearch(a, 10);
    if(result >= 0)
    {
    cout<<"the element is found at index "<<result<<endl;
    }
    else
    {
        cout<<"Element is not found";
    }

    return 0;
}
