/* design and write a program to print each line of its input that contains a
particular ``pattern'' or string of characters. */

#include<stdio.h>

#define MAXLINE 1000
#define PATTERN "so"

/* getline: get line into s, return length */ 
int _getline(char s[], int lim) {
    int i, c;
    
    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
        if (c == '\n') {
            s[i++] = c;
        }
    }
    s[i] = '\0';

    return i;
}   

/* strindex: return index of t in s, -1 if non. */
int strindex(char s[], char t[]){
    int i, j, k;

    for(i = 0; s[i] != '\0'; i++) {
        for(j = i, k = 0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1; 
}



int main(){
    char line[MAXLINE];

    while (_getline(line, MAXLINE) > 0) {
        if (strindex(line, "pattern") != -1) {
            printf("%s", line);
        }
    }
    return 0;
}


