#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;     /* lower limit of temperature slace */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    fahr = lower;

    printf("  F\t |\t C\n");
    printf("-------------------\n");
    
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t |  %6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}
