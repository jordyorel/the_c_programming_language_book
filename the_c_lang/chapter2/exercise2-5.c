// Write the function any(s1,s2), which returns the first location
// in a string s1 location where any character from the string s2 occurs, 
// or -1 if s1 contains no characters from s2

#include <stdio.h>
int any(char s1[], char s2[]) {
    for(int i = 0; s1[i] != '\0'; i++) {
        for(int j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    char str[100] = "Hello, ";
    char t[] = "world!";

    int result = any(str, t);
    if(result != -1) {
        printf("Character found at position: %d\n", result);
    } else {
        printf("No character found from s2 in s1\n");
    }

    return 0;
}