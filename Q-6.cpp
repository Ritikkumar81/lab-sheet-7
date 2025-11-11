#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[50], lastName[50];
    cout << "Enter first name: ";
    cin.getline(firstName, 50);
    cout << "Enter last name: ";
    cin.getline(lastName, 50);
    strcat(firstName, " ");
    strcat(firstName, lastName);
    cout << "Full name: " << firstName << endl;
    return 0;
}
