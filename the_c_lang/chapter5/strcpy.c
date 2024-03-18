/* strcpy: copy t to s; pointer version */ 

#include<stdio.h>

void _strcpy(char *s, const char *t) {
    int i = 0;
    while((*s++ = *t++) != '\0');
}

void _strcpy2(char *s, const char *t) {
    int i = 0;
    while((*s++ = *t++));
}

int main() {

    char *s;
    char *t  = "Hello";
    _strcpy2(s, t);
    printf("%s\n", s);

    return 0;
}

