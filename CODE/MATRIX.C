#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, a[5][5], b[5][5], c[5][5], t1[5][5], t2[5][5];
    int m, n;

    clrscr();

    printf("Enter the row value and column value:\n");
    scanf("%d %d", &m, &n);

    printf("\nEnter the first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe resultant matrix after addition is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    // Matrix Transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            t1[j][i] = a[i][j]; // Transpose of first matrix
            t2[j][i] = b[i][j]; // Transpose of second matrix
        }
    }

    printf("\nTranspose of first matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", t1[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of second matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", t2[i][j]);
        }
        printf("\n");
    }

    getch();
}