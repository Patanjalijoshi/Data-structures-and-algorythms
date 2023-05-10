/* In this the two strings are checked where the strings are different but both of them consist of 
the same letters*/
#include<iostream>
using namespace std;
char a[] = "decimal";
char b[] = "medical";
void anagram()
{   
    int flag = 0;
    int i = 0;
    while(i < 9)
    {
        for(int j = 0; j < 9; j++)
        {
            if(a[i] == b[j])
            {
                b[j] = '1';
                flag = 1;
                break;
            }
        }
        if(flag  == 0)
        {   
            cout<<"The given strings are not ambigrams";
            break;
        }
        i++;
    }
    if(flag  == 1)
        {   
            cout<<"The given strings are ambigrams";
        }

}
int main()
{    
    anagram();
    return 0;
}