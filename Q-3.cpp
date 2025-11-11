#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    strcpy(str2, str1);
    cout << "The copied string is: " << str2 << endl;
    return 0;
}
