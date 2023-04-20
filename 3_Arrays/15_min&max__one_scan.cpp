#include<iostream>
using namespace std;
void minMax(int *a)
{   
    int min = a[0], max = a[0];

    for (int i = 1; i < 10; i++)
    {
        if(a[i] < min)
        {
           min = a[i];
        }
        else if(a[i] > max)
        {
           max = a[i];
        }
    }
    cout<<"min is "<<min<<" Max is "<<max;
}
int main()
{   
    int a[10] = {3,4,6,8,3,2,7,6,3,3};
    minMax(a);
    return 0;
}