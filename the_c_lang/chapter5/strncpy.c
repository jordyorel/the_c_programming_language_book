/* Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which
operate on at most the first n characters of their argument strings. For example,
strncpy(s,t,n) copies at most n characters of t to s */

#include<stdio.h>

void _strncpy(char *s, const char *t, int n) {
    while(*t && n-- > 0)
        *s++ = *t++;
    *s = '\0';
}

int main() {
    char s[50] = "Hello ";
    char *t = "Hello";
    int n;

    _strncpy(s, t, n);
    printf("%s\n", s);

    return 0;
}