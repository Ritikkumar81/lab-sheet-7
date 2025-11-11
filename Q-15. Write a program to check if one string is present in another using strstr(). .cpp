#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (strstr(str1, str2) != NULL) {
        cout << "The second string is present in the first string." << endl;
    } else {
        cout << "The second string is not present in the first string." << endl;
    }

    return 0;
}
