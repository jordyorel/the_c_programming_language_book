#include<stdio.h>

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */ 
int _strcmp(char *s, char *t) {
    for(; *s == *t; s++, t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}

int main() {
    char *s ;
    char *t = "hello";

    printf("%d\n", _strcmp(s, t));
    return 0;
}