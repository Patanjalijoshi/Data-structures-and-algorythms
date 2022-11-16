// Pointer to a structure 

#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;

};

int main()
{
    //rectangle r = {10, 12};
    //rectangle *p=&r;
    // dynamic memory allocation
    struct rectangle *p;
    p = new rectangle;
    
    p->breadth = 13;
    p->length = 22;
    
    cout<<p->breadth<<endl;
    cout<<p->length<<endl;
    return 0;
} 