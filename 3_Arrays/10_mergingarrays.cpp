#include<iostream>
using namespace std;
struct array
{ 
    int a[8] = {1,4,5,6,7,8,9,10};
    int b[7] = {2,3,6,11,22,24,33};
    int k[16] ;
}a;
void merge(struct array *a)
{   
    int i,j,l;
    i=j=l=0;
//fix this

    while(i <= 8 && j <= 6)
    {
        if(( a->a[i] <= a->b[j]) && i<=6)
        {
            a->k[l] = a->a[i];
            i++;
            l++;
        }
        else
        { 
            a->k[l] = a->b[j];
            j++;
            l++;

        }
    }
}
void print(struct array *a)
{    
    cout<<"\n";
    for(int i = 0; i <16 ; i++)
    {
        cout<<a->k[i]<<" ";
    }
}
int main()
{   
    merge(&a);
    print(&a);
    return 0;
}