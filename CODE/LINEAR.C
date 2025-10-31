#include <stdio.h>
#include <conio.h>

void main() {
    int n, key, a[20], i, *ptr;

    clrscr();

    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the element to search\n");
    scanf("%d", &key);

    for (ptr = a; ptr < a + n; ptr++) {
        if (*ptr == key) {
            printf("\nThe given number %d is found in the array", key);
            printf("\nThe position of %d is %d", key, ptr - a + 1); // 1-based index
            break;
        }
    }

    if (ptr == a + n) {
        printf("\nThe element %d is not found in the array", key);
    }

    getch();
}
