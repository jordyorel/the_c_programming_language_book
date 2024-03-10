/* Write a program to ``fold'' long input lines into two 
or more shorter lines after the last 
non-blank character that occurs before the n-th column of input. */

#define MAX_CHARS 1000
#define COLUMN_LIMIT 20

#include<stdio.h>

void flodlines(char s[], int maxLineLength) {
    int i, last_space = -1;

    for (i = 0; s[i] != '\0' ; i++){
        if (i % maxLineLength == 0 && i != 0) {
            if(s[i] != ' ' && s[i] != '\t' && last_space != -1) {
                s[last_space] = '\n';
            } else {
                s[i] = '\n';
            }
            last_space = -1;
        } else if (s[i] == ' ' || s[i] == '\t') {
            last_space  = i;
        }
    }
    printf("%s", s);
}

int main() {
    char s[MAX_CHARS];
    printf("Enter a long line of text:\n");
    fgets(s, sizeof(s), stdin);

    printf("\nFolded output :\n" );
    flodlines(s, COLUMN_LIMIT);

    return 0;
}
