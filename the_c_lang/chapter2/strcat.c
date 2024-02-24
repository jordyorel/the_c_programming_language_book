#include<stdio.h>

void _strcat(char str[], char t[]) {
    int i, j;
    i = j = 0;
    while (str[i] != '\0')
        i++;
    // while ((str[i++] = t[j++]) != '\0')
    //     ;

    // can be written:
    while ((str[i] = t[j]) != '\0') {
        i++;
        j++;
    }
}


int main() {
    char str[100] = "Hello, ";
    char t[] = "world!";

    _strcat(str, t);

    printf("%s\n", str);
    return 0;
}