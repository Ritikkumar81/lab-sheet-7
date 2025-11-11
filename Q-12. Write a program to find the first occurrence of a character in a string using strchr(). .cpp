#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a character to search: ";
    cin >> ch;

    char *ptr = strchr(str, ch);

    if(ptr != NULL)
        cout << "The first occurrence of '" << ch << "' is at position " << (ptr - str + 1) << endl;
    else
        cout << "Character not found" << endl;

    return 0;
}
