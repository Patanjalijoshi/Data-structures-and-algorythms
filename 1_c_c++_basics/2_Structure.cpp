//defining a structure and doing some basic operations

#include<iostream>
using namespace std;

struct rectangle
{
  float length;
  float breadth;
} r;

//struct rectangle r;

int main()
{
    //struct rectangle r;
    r = {3.3,4.4};
    cout<<"area of the rectangle = "<<r.breadth*r.length;

    return 0;
}
// Diffe