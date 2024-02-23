// This program replaces multiple spaces with a single space
#include <stdio.h>

int main() {
    
    int prev_char, curr_char;
    prev_char = EOF;
    while ((curr_char = getchar()) != EOF) {
        if (!(prev_char == ' ' && curr_char == ' ')) {
            putchar(curr_char);
        }
        prev_char = curr_char;
    }

    return 0;
}