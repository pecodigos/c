#include <stdio.h>

#define SIXTY 60

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    int hr, min, sec;
    int total_sec;

    printf("Type any number in seconds and I'll show you how much time is that in hh/mm/ss!\n");

    printf("Enter number in seconds: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hr, &min, &sec);

    printf("\nYour time is: %d:%d:%d.\n", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = (int) total_sec / (SIXTY * SIXTY);
    total_sec = total_sec % (SIXTY * SIXTY);

    *min = (int) total_sec / SIXTY;

    *sec = (int) total_sec % SIXTY;
}