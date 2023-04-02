// this program is about understanding the basics of arrays
//take input from user and fill up an array and display using for each loop 
#include<iostream>
using namespace std;
int main()
{  
    int element;
    //int n;
    int A[5]; 
    //cout<<"Enter the number of elements:"<<endl;
    //cin>>n;
    for(int i = 0; i<=5; i++){
        cout<<"Enter an integer element"<<endl;
        cin>>element;
        A[i]=element;
    }

    // using the for each loop to print the array 
    for(int x : A)
    cout<<x<<" ";
    
    return 0;
}

