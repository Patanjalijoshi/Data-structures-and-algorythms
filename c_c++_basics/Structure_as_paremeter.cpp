// this is about passing structure as a paremeter
#include<iostream>
using namespace std;

struct rectangle
{
  int length;
  int bredth;
};

struct arr
{
    int A[5] = {1,2,3,4,5};
    int size = 5;
};

//pass by value
// void fun(struct rectangle r)
// {
//     cout<<r.bredth<<" "<<r.length;

// }


// int main()
// {   
//     rectangle r={10,5};
//     cout<<r.bredth<<" "<<r.length;
//     fun(r);
//     return 0;
// }

//pass by address
// void fun(struct rectangle *P)
// {
//     cout<<P->bredth<<" "<<P->length<<endl;
//    // cout<<P->bredth*P->length<<endl;
// }


// int main()
// {   
//     rectangle r={10,5};
//     cout<<"\n"<<r.bredth<<" "<<r.length<<endl;
//     fun(&r);
//     return 0;
// }

//dynamic allocation of memory for a structure
// struct rectangle *fun()
// {
//   struct rectangle *p;
//   p = new rectangle;

//   p->bredth = 13;
//   p->length = 20;

//   return p;
// }

// int main()
// {
//     struct rectangle *ptr=fun();

//     cout<<ptr->bredth<<" "<<ptr->length;

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