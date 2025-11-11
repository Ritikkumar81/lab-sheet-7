#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100];
    int len;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    len = strlen(str);


    int index = 0;
    for (int i = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            str[index++] = str[i];
        }
    }

    str[index] = '\0';

    cout << "String after removing vowels: " << str << endl;

    return 0;
}
