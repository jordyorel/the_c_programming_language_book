#include<stdio.h>

int _strlen(char str []){
    int i = 0;
    while(str[i] != '\0') {
        ++i;
    }
    return i;
}


int main() {
    char str [] =  "Hello";

    printf("%d\n", _strlen(str));

    return 0;
}