#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int n1, n2;
    printf("Enter the first integer value: ");
    scanf("%d", &n1);
    printf("Enter the second integer value: ");
    scanf("%d", &n2);

    printf("\nBefore the swap:\n");
    printf("Number 1 was: %d\nNumber 2 was: %d\n", n1, n2);

    swap(&n1, &n2);
    printf("\nAfter the swap:\n");
    printf("Number 1 is now: %d\nNumber 2 is now: %d\n", n1, n2);
}

void swap(int *p, int *q) {
    const int temp = *p;
    *p = *q;
    *q = temp;
}
