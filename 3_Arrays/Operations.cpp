//this program deals with the implimentation of get(), set(), max(), min(), sum(), avg()
#include<iostream>
using namespace std;
void get(int *p, int index, int size)
{   
  if(index < size && index > 0)
  {
    cout<<"\nElement at index "<<index<<" is "<<p[index] ;
  }  

}    
void set(int *p, int key, int index, int size)
{  
    if(index < size && index >= 0)
    {
        p[index] = key;
    }     
     

}
int  max(int *p, int key, int size)
{ 
    int max;
    for(int i = 0; i < size; i++)
    {
       max = p[i];
       if(max < p[i+1])
       {
         max = p[i+1];
       }

    }
    return max;

}
int min(int *p, int key, int size)
{ 
    int min;
    for(int i = 0; i < size; i++)
    {
       min = p[i];
       if(min > p[i+1])
       {
         min = p[i+1];
       }

    }
    return min;

}
int Sum(int *p , int size)
{ 
    int sum = 0;
    for(int i  = 0; i < size; i++)
    {
        sum = p[i] + sum;
    }
  return sum; 

}
int Avg(int *p, int size)
{
    int sum, avg;
    sum = Sum(p, size);
    avg = sum/size;
    return avg;
}
void print(int *p, int size)
{    
    cout<<"\n";
    for(int i = 0; i < size; i++)
    {
        cout<<p[i]<<" ";
    }
}


int main()
{   
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int *p = a;
    int size = 9;
    int key = 5;
    int index = 7;
    int avg, sum;
    get(p, index, size);
    set(p, key, index, size);
    print(p, size);
    sum = Sum(p , size);
    avg = Avg(p , size);

    
    return 0;
}