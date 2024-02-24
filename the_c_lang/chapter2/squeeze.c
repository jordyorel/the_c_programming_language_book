// The function squeeze(s,c) removes all occurrences
// of the character c from the string s

#include<stdio.h>

    void
    squeeze(char s[], int c) {
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++) {
        if(s[i] != c) {
            s[j++] = s[i];
            // can be written as:
            // s[j] = s[i];
            // j++;
        }
    }
    s[j] = '\0';

}

int main() {
    char inputString[] = "Hello, World!";
    char characterToRemove = 'o';

    squeeze(inputString, characterToRemove);

    printf("Squeezed string: %s\n", inputString);

    return 0;
}