#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  
    ptr = strrchr(str, ch);

    if(ptr != NULL) {
        printf("The last occurrence of '%c' is at position %ld.\n", ch, ptr - str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
