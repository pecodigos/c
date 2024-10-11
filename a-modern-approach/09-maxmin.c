#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);
int *max(int *a, int *b);

int main(void) {
    /* -- First Exercise --
    int b[N], big, small;

    printf("Enter %d numbers: ", N);

    for (int i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    */

    int i = 3, j = 5;

    const int *p = max(&i, &j);

    printf("Max value is: %d\n", *p);
}
void max_min (int a[], int n, int *max, int *min) {
    *min = a[0];
    *max = *min;

    for (int i = 1; i < n; i++) {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}

int *max(int *a, int *b) {
    if (*a > *b)
        return a;
    else
        return b;
}