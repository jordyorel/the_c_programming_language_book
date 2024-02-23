// The function lower maps a single
//character to lower case for the ASCII 
//character set. If the character is not an upper case letter,
//lower returns it unchanged.

#include <stdio.h>


int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int main() {
    char s = 'A';

    float x = 6.6;
    int i = 5;

    x = i;
    i = x;

    printf("i = %d\n", i);
    printf("x = %.1f\n", x);

    // printf("%d\n", lower(s));

    // char c = 'c';
    // char a = 'a';
    // char A = 'A';
    // printf("c = %d\n", c);
    // printf("a = %d\n", a);
    // printf("A = %d\n", A);

    return 0;
}