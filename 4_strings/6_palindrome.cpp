#include <iostream>
#include <cstring>
using namespace std;
// go through this program once more
void palindrome(char *lang, char *lang1) {
    int flag = 0;
    // to check if the string is a palindrome
    for (int k = 0; lang[k] != '\0'; k++) {
        if (lang[k] != lang1[k]) {
            cout << "\nThe string is not a palindrome";
            flag++;
            break;
        } 
    }
    if (flag == 0) {
        cout << "\nThe given string is a palindrome";
    }
}

int main() {
    char lang[] = "malayalam";
    char lang1[10];
    int i, j;

    for (i = 0; lang[i] != '\0'; i++) {
    }
    for (j = 0; j < i; j++) {  
        lang1[j] = lang[i - j - 1];
    }
    lang1[j] = '\0';

    cout << lang1;
    palindrome(lang, lang1);

    return 0;
}