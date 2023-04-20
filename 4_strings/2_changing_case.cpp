#include<iostream>
using namespace std;
int main()
{   
    char city[] = "banglore";
    int i;

    for(i = 0; city[i] != '\0'; i++)
    { 
        if(city[i] >= 65 && city[i] <= 90)
        {
          city[i] = city[i] + 32;
        }
        else if(city[i] >= 'a' && city[i] <= 'z')
        {
            city[i] = city[i] - 32;
        }

        
    }
    
    cout<<"string is "<<city;
    return 0;
}