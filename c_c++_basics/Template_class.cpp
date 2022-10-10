// this is about understanding how to create a template class
#include<iostream>
using namespace std;

template<class t>
class rectangle 
{ 
private:
    t length;
    t bredth;


public:
  
   rectangle (t a, t b);

   t area();
};
template<class t>

rectangle<t> :: rectangle(t a, t b)
{
    this->bredth = b;
    this->length = a;
    
} 
template <class t>
t rectangle<t>::area()
{ 
    return bredth*length;

}


int main()
{   
   
   rectangle<float>re(1.5,3);
    cout<<re.area();

    
}