#include <stdio.h>

int main(void) {
    int c, nl, blank, tab;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tab;   
    }
    printf("New lines: %d\nBlank spaces: %d\nTabs: %d\n", nl, blank, tab);
}
