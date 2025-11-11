#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool areAnagrams(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    }
  
    sort(str1, str1 + len1);
    sort(str2, str2 + len2);

    if (strcmp(str1, str2) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
