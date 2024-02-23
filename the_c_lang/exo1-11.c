// Write a program that prints its input one word per line.

#include <stdio.h>


int main() {

    int c;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            putchar(c);
        }else{
            putchar('\n');
        }
    }

    return 0;
}