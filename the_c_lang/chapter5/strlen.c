#include<stdio.h>

int _strlen(char *s) {
    int n;
    for(n = 0; *s != '\0'; s++)
        n++;
    return n;
}

int _strlen2(char *s) {
    char *p = s;
    while(*p != '\0') {
        p++;
    }
    return p - s;
}

int main() {
    char *s = "hello";
    printf("%d\n", _strlen2(s));
    printf("%d\n", _strlen(s));
    return 0;
}