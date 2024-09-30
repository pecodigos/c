#include <stdio.h>

// Computes the dimensional weight of a 12" x 10" x 8" box

int main(void) {
    int volume, weight;

    int height = 8;
    int lenght = 12;
    int width = 10;
    volume = height * lenght * width;
    
    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
