// The function lower maps a single character to lower case for the ASCII
// character set. If the character is not an upper case letter,
// lower returns it unchanged.

#include <stdio.h>

int lower(int c) {
    return  c = (c  >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c ;
}



int main() {
    char s = 'A';

    printf("%d\n", lower(s));

    // char c = 'c';
    // char a = 'a';
    // char A = 'A';
    // printf("c = %d\n", c);
    // printf("a = %d\n", a);
    // printf("A = %d\n", A);

    return 0;
}