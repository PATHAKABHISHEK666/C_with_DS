#include <stdio.h>

int main() {
    int a[10][10], b[10][10], s[10][10];
    int m, n, l, p, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &l, &p);

    // Check multiplication condition
    if (n != l) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            s[i][j] = 0;
            for (k = 0; k < n; k++) {
                s[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
