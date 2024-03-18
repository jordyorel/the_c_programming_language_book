/* 
* Write versions of the library functions strncpy, 
* strncat, and strncmp, which operate on at most the first n characters 
* of their argument strings. For example,
* strncpy(s,t,n) copies at most n characters of t to s 
*/

#include<stdio.h>

/* strcat:  concatenate at most n characters of t to the end of s; s
            must be big enough */
void _strncat(char *s, const char *t, int n) {
    while(*s)
        s++;
    while(*t && n-- > 0)
        *s++ = *t++;
    *s = '\0';
}

int main() {
    char s[100] = "Hello";
    char *t = "Hello";
    int n;

    _strncat(s, t, n);
    printf("%s\n", s);

    return 0;
}