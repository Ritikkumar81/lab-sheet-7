#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], substr[100];
    
    cout << "Enter the main string: ";
    cin.getline(str, 200);

    cout << "Enter the substring to search: ";
    cin.getline(substr, 100);

    char *ptr = strstr(str, substr);

    if(ptr != NULL)
        cout << "Substring found at position " << (ptr - str + 1) << endl;
    else
        cout << "Substring not found" << endl;

    return 0;
}
