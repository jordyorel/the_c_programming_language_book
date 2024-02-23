#include<stdio.h>
#include<stdlib.h>

#define MAXLINE 1000

char *_reverse(char s[], int len);
int main() {
   
    printf("Input some text:\n");
    char s[MAXLINE];
    int c, i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';

    char *reversed = _reverse(s, i);
    printf("The reverse line is:\n");
    printf("%s\n", reversed);
    return 0;
}


char *reverse(char s[], int len) {
    char *reversed = malloc((len + 1) * sizeof(char));
    if (reversed == NULL) {
        printf("malloc failed\n");
        return NULL;
    }
    int j;

    for (j = 0; j < len; ++j) {
        reversed[j] = s[len - j - 1];
    }
    reversed[j] = '\0';
    free(reversed);

    return reversed;
}

char * _reverse(char s[], int len) {
    char temp;
    int i, j;
    for(i = 0, j = len - 1; i < j; ++i, --j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    s[len] = '\0';

    return s;
}