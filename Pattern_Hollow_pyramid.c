#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // leading spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // print increasing numbers
        for (j = 1; j <= i; j++) {
            // spaces upto 1 - n
            if (i == 1||i == n||j == 1)
                printf("%d ", i);
            else
                printf("  ");
            //printf("%d ", j);
        }
        // print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            if (i == n||j == 1)
                printf("%d ", i);
            else
                printf("  ");
            //printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

