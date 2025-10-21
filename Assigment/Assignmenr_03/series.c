#include <stdio.h>

int main() {
    int j, k = 1, n;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    for (j = 1; j <= n; j++) {
        printf("%d + ", k * k);

        if (j == 1 || j % 2 != 0)
            k += 1;
        else
            k += 3;
    }

    printf("\n");
    return 0;  
}
