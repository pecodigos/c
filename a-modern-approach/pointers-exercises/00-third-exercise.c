#include <stdio.h>

#define N 10

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    printf("Enter 10 numbers that you want to know the sum and average of: \n");

    double numbers[N], avg, sum;

    for (int i = 0; i < N; i++) {
        scanf("%lf", &numbers[i]);
        printf("You entered %d %s.\n", i + 1, (i == 0) ? "number" : "numbers");
        if (i + 1 == N)
            break;
        printf("Enter your next number: ");
    }
    printf("\n");

    avg_sum(numbers, N, &avg, &sum);

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);
}

void avg_sum(double a[], int n, double *avg, double *sum) {
    *sum = 0.0;
    for (int i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}