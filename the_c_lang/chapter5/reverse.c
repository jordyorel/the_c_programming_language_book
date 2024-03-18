#include<stdio.h>
#include<string.h>

void reverse(char *s) {
    char *p, temp;
    p = s + strlen(s) - 1;
    while(p > s) {
        temp = *s;
        *s++ = *p;
        *p-- = temp;
    }
}

int main() {
    char s[] = "Hello";

    reverse(s);

    printf("%s\n", s);
    return 0;
}

