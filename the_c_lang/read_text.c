#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

char* reverse(char s[], int len);
void remove_blank(char s[], int len);

int main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    printf("Input some text:\n");
    while ((len = get_line()) > 0) {
        if (len > max ) {
            max = len;
            copy();
        }
    }

    printf("The longest line is:\n");
    if (max > 0 ){
        printf("%s\n", longest);
    }

    char *reversed = reverse(longest, max);
    if(reversed != NULL) {
        printf("The reverse line is:\n");
        printf("%s\n", reversed);
        free(reversed);
    } else {
        printf("reverse failed\n");
    }

    printf("The line without blank is:\n");
    remove_blank(longest, max);


    return 0;
}

int get_line(void) {
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

void copy() {
    int i = 0;
    extern char longest[], line[];
    while ((longest[i] = line[i]) != '\0')
    {
        ++i;
    }
    
}

char * reverse(char s[], int len) {
    char* reversed = malloc((len + 1) * sizeof(char)) ;
    if(reversed == NULL) {
        printf("malloc failed\n");
        return NULL;
    }
    int j;

    for (j = 0; j < len; ++j) {
        reversed[j] = s[len - j - 1];
    }
    reversed[j] = '\0';

    return reversed;
}

void remove_blank(char s[], int len) {
    int i, j;
    for (i = j = 0; i < len; ++i) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("%s\n", s);
}

