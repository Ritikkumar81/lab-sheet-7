#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    char arr[50][100];
  
    for(int i = 0; i < n; i++) {
        cout << "Enter string " << i+1 << ": ";
        cin.getline(arr[i], 100);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
