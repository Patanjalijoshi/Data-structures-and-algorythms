#include<iostream>
using namespace std;

//Tail recursion
// all the operations are performed at calling time
// void fun(int n)
// {
//     if(n>0)
//     {
//         cout<<n<<endl;
//         fun(n-1);
//     }
// }

//head recursion
// no operations are performed at the time of function call
// all operations are performed at return time
void fun(int n)
{
    if(n>0)
    {
        
        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{   
    int x =3;
    fun(x);
    return 0;
}