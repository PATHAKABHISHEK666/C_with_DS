#include <stdio.h>

void insert();
void del();
void traverse();
void merged();

int a[10], i = -1;

int main() {
    int n;
    do {
        printf("\n********************** Your Choices Are **************************\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Merged\n");
        printf("5. Exit\n");
        printf("Now Enter Your Choice: ");
        scanf("%d", &n);

        switch(n) {
            case 1: insert(); break;
            case 2: del(); break;
            case 3: traverse(); break;
            case 4: merged(); break;
            case 5: printf("Exiting program...\n"); break;
            default: printf("Your choice is invalid!\n");
        }
    } while(n != 5);

    return 0;
}

void insert() {
    if(i < 9) {
        printf("Enter the number to insert: ");
        i++;
        scanf("%d", &a[i]);
    } else {
        printf("The array is full.\n");
    }
}

void del() {
    int item, j, flag = 0, pos;

    printf("Enter the number to delete: ");
    scanf("%d", &item);

    for(j = 0; j <= i; j++) {
        if(a[j] == item) {
            flag = 1;
            pos = j;
            break;
        }
    }

    if(flag) {
        for(j = pos; j < i; j++) {
            a[j] = a[j + 1];
        }
        i--;
        printf("Item deleted successfully.\n");
    } else {
        printf("The number is not in the list.\n");
    }
}

void traverse() {
    if(i == -1) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements:\n");
    for(int j = 0; j <= i; j++) {
        printf("%d\n", a[j]);
    }
}

void merged() {
    int p, q, m, n, c;
    int array1[100], array2[100], array3[200];

    printf("Enter number of elements in the first sorted array: ");
    scanf("%d", &p);
    printf("Enter elements of the first sorted array:\n");
    for(m = 0; m < p; m++) {
        scanf("%d", &array1[m]);
    }

    printf("Enter number of elements in the second sorted array: ");
    scanf("%d", &q);
    printf("Enter elements of the second sorted array:\n");
    for(n = 0; n < q; n++) {
        scanf("%d", &array2[n]);
    }

    c = 0;
    m = 0;
    n = 0;

    while(m < p && n < q) {
        if(array1[m] <= array2[n]) {
            array3[c++] = array1[m++];
        } else {
            array3[c++] = array2[n++];
        }
    }

    while(m < p) {
        array3[c++] = array1[m++];
    }

    while(n < q) {
        array3[c++] = array2[n++];
    }

    printf("Merged array in ascending order:\n");
    for(int k = 0; k < c; k++) {
        printf("%d\n", array3[k]);
    }
}