#include<iostream>
using namespace std;
void findsum(int *a, int sum)
{   int n = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if( (a[i] + a[j]) == sum)
            {   
                ++n;
                cout<<n<<" ("<<a[i]<<" ,"<<a[j]<<")"<<endl;
                
                break;
            }
        }
    }
    if(n == 0)
    {
        cout<<"\nNo pairs were found";
    }

}
int main()
{   
    int a[10] = {3,4,6,8,3,2,7,6,3,3};
    int b;
    cout<<"Enter a number";
    cin>>b;
    findsum(a, b);
    
    return 0;
}