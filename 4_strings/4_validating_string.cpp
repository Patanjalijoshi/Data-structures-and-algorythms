#include<iostream>
using namespace std;
void valid(char *n)
{   
    int flag = 0;
    for( int i = 0; n[i] != '\0'; i++)
    {
        if((!(n[i] >= 65 && n[i] <= 90) && !(n[i] >= 97 && n[i] <= 122) && !(n[i] >= 48 && n[i] <= 57)))
        {
            cout<<"not valid";
            flag++;
            break;
        }
    }
    if(flag == 0)
    {
      cout<<"valid";
    } 
}
int main()
{   
    char *name = "Jaggu#123";
    valid(name);
    return 0;
}