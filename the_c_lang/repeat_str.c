#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char *repeat_str(size_t count, const char *src) {
    size_t len = strlen(src);
    size_t totlen = len * count + 1;
    char *dest = malloc(len);

    size_t i = 0;
    while (i < count) {
        strcpy(&dest[i * len], src);
        i++;
    }
    dest[totlen - 1] = '\0';
    return dest;
}

int main() {
    int count = 5;
    char *str = "hello";

    printf("%s\n", repeat_str(count, str));

    return 0;
}