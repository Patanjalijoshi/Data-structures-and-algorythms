#include<iostream>
using namespace std;
void duplicates(int *a)
{
    int i = 0;
    int dup,n = 0;
    while(i < 10)
    {   
        for(int j = i+1; j < 10; j++)
        {
            if( (a[i] == a[j]) && (a[i] != -1) )
            {   
                dup = a[j];
                a[j] = -1;
                n++;
            }
        }
        if(n>0)
        {
            cout<<"\nThere are "<<n<<" duplicates of the number "<<dup;
        }
    n = 0;
    i++;
    }
}
int main()
{   
    int a[10] = {3,4,6,8,3,2,7,6,3,3};
    duplicates(a);
    return 0;
}