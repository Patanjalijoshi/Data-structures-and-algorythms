#include<iostream>
using namespace std;
void missing(int *a)
{   
    int i = 0;
    int diff = a[i]-i;
    while( i < 10)
    {
        if((a[i]-i) != diff)
        {
            cout<<"\nMissing element is "<<diff + i;
            diff =  a[i]-i;   
        }
       i++;
    }

}
int main()
{   
    int a[10] = {7,8,10,11,13,14,16,18,19,20};
    missing(a);
    
    return 0;
}