#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    int wordCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    
    bool inWord = false;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "The number of words in the string is: " << wordCount << endl;

    return 0;
}
