// working with structures and functions
// call by value and call by address
// there are going to be three functions 
// initialise, find area and a function to change the length
#include<iostream>
using namespace std;

struct rectangle 
{
    int length;
    int bredth;

};
//dynamically allocating memory to a rectangle and initializes the length and the bredth 
struct rectangle *init(int a, int b)
{
    struct rectangle *r;        
    r = new rectangle;
    r->bredth = b;
    r->length = a;
    return r;
} 

void area(struct rectangle *r)
{ 
    cout<<"Area of the rectangle = "<<r->bredth*r->length<<endl;

}


int main()
{   int x,y;
   cout<<"enter the length and the bredth of the rectangle"<<endl;
   cin>>x>>y; 
   struct rectangle *ptr = init(x,y);
   area(ptr);
    return 0;
}