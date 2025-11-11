#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    strncpy(destination, source, 5);


    destination[5] = '\0';

    cout << "First 5 characters copied: " << destination << endl;

    return 0;
}
