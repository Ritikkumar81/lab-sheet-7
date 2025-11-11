#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], str3[100], sentence[300];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    cout << "Enter the third string: ";
    cin.getline(str3, 100);
  
    strcpy(sentence, str1);

    strcat(sentence, " ");
    strcat(sentence, str2);

    strcat(sentence, " ");
    strcat(sentence, str3);

    cout << "The sentence formed is: " << sentence << endl;

    return 0;
}
