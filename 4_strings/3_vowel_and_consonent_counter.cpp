#include<iostream>
using namespace std;
int main()
{   
    char sen[] = "How are you 5";
    int vcount = 0, ccount = 0;
    
    for(int i = 0; sen[i] != '\0'; i++)
    {
        if((sen[i] == 'a') || (sen[i] == 'e') || (sen[i] == 'i') || (sen[i] == 'o') || (sen[i] == 'u') || (sen[i] == 'A')|| (sen[i] == 'E') || (sen[i] == 'I') || (sen[i] == 'O') || (sen[i] == 'U'))
        {
            vcount++;
        }
        else if((sen[i] >='a') && (sen[i] <= 'z') || (sen[i] >='A') && (sen[i] <= 'Z'))  
        {
            ccount++;
        }  
    }
    cout<<"Number of vowels is "<<vcount;
    cout<<"\nNumber of consonents is "<<ccount;

    return 0;
}