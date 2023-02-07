// this is about passing arrays as parameters
#include<iostream>
using namespace std;

int *create(int size){   //this function gives an integer type pointer as output hence the * before the function name
    int *p;
    p = new int[size];
    
    for(int i =0; i<size; i++){
     p[i]=i+1;
    }
  return p;
}

void fun(int *A,int n){
   
    for(int i =0; i<n; i++){
        cout<<A[i]<<endl;
    }
}


int main()
{ 
    //int A[]={1,2,3,4,5};
    int n = 5;
    int *ptr;
    ptr = create(n); 
    // for(int x : A){
    // cout<<x<<endl;
    // }
    
    fun(ptr, n);

    return 0;
}

// only array address can be passed not the entire array
