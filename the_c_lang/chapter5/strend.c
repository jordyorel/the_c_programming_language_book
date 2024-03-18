/* Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise. */

#include<stdio.h>

int _strend(char *s, char *t) {

    char *bs = s;
    char *bt = t;

    while(*bs) {
        t = bt;
        for(*s = *bs; *s == *t; s++, t++) {
            if(*s == '\0' && *t == '\0')
                return 1;
        }
        bs++;
    }
    return 0;
}

int main() {
    char s[50] = "Hello ";
    char *t = "Hello";

    printf("%d\n", _strend(s, t));

    return 0;
}