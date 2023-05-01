/* there are three methods that can be used to find duplicates in a string
1. comparing with all the elements in the string - this method has already been done in arrays
2. using hashtable as counting
3. using bits */

// comparing with all the elements in the string

#include<iostream>
using namespace std;
 char a[] = "bengaluru";
void compare()
{
    int i = 0 ,j = 0, dupc = 0;
    char dup;
    while(i < 10)
    { 
        for( j = i+1; j < 10; j++)
        {
            if( (a[i] == a[j]) && (a[i] != 'z') )
            { 
                dupc++;
                dup = a[j];
                a[j] = 'z';
            
            }
            if(dupc > 0 )
            {
                cout<<"There are "<<dupc<<" of letter "<<dup<<endl;
                dup = 0;
                dupc = 0;
            }
        }
        i++;
    }
}
int main()
{   
    compare();
    return 0;
}