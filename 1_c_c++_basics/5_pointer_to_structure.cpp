// Pointer to a structure 

#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breth;

};

int main()
{
    //rectangle r = {10, 12};
    //rectangle *p=&r;
    // dynamic memory allocation
    struct rectangle *p;
    struct rectangle *q;
    struct rectangle *r;
    p = new rectangle;
    q = new rectangle;
    r = new rectangle;
    
    p->breth = 13;
    p->length = 22;

    q->breth = 22;
    q->length = 13; 

    r->breth =  q->breth*p->breth;
    r->length =  p->length* q->length;

    cout<<r->breth<<endl;
    cout<<r->length<<endl;
    return 0;
} 