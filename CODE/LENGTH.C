#include <stdio.h>
#include <conio.h>

void main() {
    char str[20];
    char *start, *end, temp;
    int length = 0;

    clrscr();

    printf("Enter a string:\n");
    scanf("%s", str);

    // Calculate length of string
    start = str;
    while (*start != '\0') {
        length++;
        start++;
    }

    printf("\nLength of the given string \"%s\" is %d", str, length);

    // Reverse the string using pointers
    start = str;
    end = str + length - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nThe reversed string is \"%s\"", str);

    getch();
}
