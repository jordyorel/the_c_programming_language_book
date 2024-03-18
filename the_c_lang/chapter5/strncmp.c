#include<stdio.h>

/* strncmp:  compare at most n characters of s and t, return <0 if s<t,
             0 if s==t, >0 if s>t */
int _strncmp(char *s, char *t, int n) {
    for(; *s == *t && n-- > 0; s++, t++)
        if(*s == '\0' || n == 0)
            return 0;
    return *s - *t;
}

int main() {
    char s[] = "Hello";
    char t[] = "Helicapter";

    int comparison = _strncmp(s, t, 3);

    if (comparison < 0)
        printf("s is less than t\n");
    else if (comparison > 0)
        printf("s is greater than t\n");
    else
        printf("s is equal to t\n");

    return 0;
}