#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, j, r;

    clrscr();  // Clear screen (Turbo C only)

    printf("\nGive the value of n\n");
    scanf("%d", &n);

    printf("\nThe prime numbers are:\n");

    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }

        if (j == i)  // If no divisor was found
            printf("%d\t", i);
    }

    getch();  // Wait for key press (Turbo C only)
}
