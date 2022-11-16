// this is about passing structure as a parameter
#include<iostream>
using namespace std;

struct rectangle
{
  int length;
  int breadth;
};

struct arr
{
    int A[5] = {1,2,3,4,5};
    int size = 5;
};

//pass by value
// void fun(struct rectangle r)
// {
//     cout<<r.breadth<<" "<<r.length;

// }


// int main()
// {   
//     rectangle r={10,5};
//     cout<<r.breadth<<" "<<r.length;
//     fun(r);
//     return 0;
// }

//pass by address
// void fun(struct rectangle *P)
// {
//     cout<<P->breadth<<" "<<P->length<<endl;
//    // cout<<P->breadth*P->length<<endl;
// }


// int main()
// {   
//     rectangle r={10,5};
//     cout<<"\n"<<r.breadth<<" "<<r.length<<endl;
//     fun(&r);
//     return 0;
// }

//dynamic allocation of memory for a structure
// struct rectangle *fun()
// {
//   struct rectangle *p;
//   p = new rectangle;

//   p->breadth = 13;
//   p->length = 20;

//   return p;
// }

// int main()
// {
//     struct rectangle *ptr=fun();

//     cout<<ptr->breadth<<" "<<ptr->length;

//     return 0;
// }
void printarray(struct arr r)
{
 for(int i =0; i < r.size; i++){
    cout<<r.A[i]<<endl;
 }
}
int main()
{   
    struct arr r;
    printarray(r);
    return 0;
}