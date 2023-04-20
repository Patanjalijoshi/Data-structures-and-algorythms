#include<iostream>
using namespace std;
int main()
{   
    char lang[] = "malayalam";
    char lang1[10];
    int i,j;
    for(i = 0; lang[i] != '\0'; i++)
    {

    }
    
    
    for(j = 0; j < 10; j++)
    {  
        i--;
        lang1[j] = lang[i];
        
    }
    lang1[j] = '\0';
    cout<<lang1;

    return 0;
}