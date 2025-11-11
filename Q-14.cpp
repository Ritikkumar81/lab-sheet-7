#include <stdio.h>
#include <string.h>

int main() {
    char str[200], substr[100];
    char *ptr;

    printf("Enter the main string: ");
    scanf(" %[^\n]", str);

    printf("Enter the substring to search: ");
    scanf(" %[^\n]", substr);

    ptr = strstr(str, substr);

    if(ptr != NULL) {
        printf("Substring found at position %ld.\n", ptr - str + 1);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
