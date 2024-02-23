#include <stdio.h>

#define TABSTOP 4 // Assuming a tab stop every 4 columns

int main() {
    int c, position;

    position = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int spaces = TABSTOP - ((position - 1) % TABSTOP);
            for (int i = 0; i < spaces; ++i) {
                putchar(' ');
                ++position;
            }
        }
        else if (c == '\n') {
            putchar(c);
            position = 1;
        }
        else {
            putchar(c);
            ++position;
        }
    }

    return 0;
}
