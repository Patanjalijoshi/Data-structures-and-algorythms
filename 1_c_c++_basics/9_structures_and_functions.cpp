// working with structures and functions
// call by value and call by address
// there are going to be three functions 
// initialise, find area and a function to change the length

// modular method of programing

// #include<iostream>
// using namespace std;

// struct rectangle 
// {
//     int length;
//     int bredth;

// };
// //dynamically allocating memory to a rectangle and initializes the length and the bredth 
// struct rectangle *init(int a, int b)
// {
//     struct rectangle *r;        
//     r = new rectangle;
//     r->bredth = b;
//     r->length = a;
//     return r;
// } 

// void area(struct rectangle *r)
// { 
//     cout<<"Area of the rectangle = "<<r->bredth*r->length<<endl;

// }


// int main()
// {   int x,y;
//    cout<<"enter the length and the bredth of the rectangle"<<endl;
//    cin>>x>>y; 
//    struct rectangle *ptr = init(x,y);
//    area(ptr);
//     return 0;
// }


// Object oriented program


#include<iostream>
using namespace std;

class rectangle 
{ 
private:
    int length;
    int bredth;


public:
  void init (int a, int b)
{
    bredth = b;
    length = a;
    
} 

  void area()
{ 
    cout<<"Area of the rectangle = "<<bredth*length<<endl;

}
};


int main()
{   int x,y;
    rectangle r;
   cout<<"enter the length and the bredth of the rectangle"<<endl;
   cin>>x>>y; 
   
   r.init(x,y);
   r.area();

    return 0;
}