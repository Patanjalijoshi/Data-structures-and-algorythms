// This is all about functions and parameter passing methods

#include<iostream>
using namespace std;
// addition using functions
// int add(int a, int b)
// {
//     return a+b;
// }

// int main()
// {   
//     int num1=10;
//     int num2=20;
//     int sum;
//     sum = add(num1, num2);
//     cout<<"sum of num1 and num2 = "<<sum;
//     return 0;
// }


// The below code demonstrates pass by value

// void swap(int x, int y){
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//    cout<<"values of x and y"<<endl;
//    cout<<x<<" "<<y<<endl;;

// }

// int main(){

//     int a =10;
//     int b =20;
//     swap(a,b);
//     cout<<"values of a and b";
//     cout<<"\n"<<a<<" "<<b;
//     return 0;
// }


// call by address 

// void swap(int *x, int *y){
//    int temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//    cout<<"values of x and y"<<endl;
//    cout<<x<<" "<<y<<endl;;

// }

// int main(){

//     int a =10;
//     int b =20;
//     swap(&a,&b);
//     cout<<"values of a and b";
//     cout<<"\n"<<a<<" "<<b;
//     return 0;
//}



// call or pass by reference
//address of a and x and address of b and y is the same
void swap(int &x, int &y){
   int temp;
   temp = x;
   x = y;
   y = temp;
   cout<<"values of x and y"<<endl;
   cout<<x<<" "<<y<<endl;;

}

int main(){

    int a =10;
    int b =20;
    swap(a,b);
    cout<<"values of a and b";
    cout<<"\n"<<a<<" "<<b;
    return 0;
}

// call by value only the values are passed 
//in call by reference the variables are reference by another name there is no new variable created
// in call by address the address of the two variable is passed and swaped 