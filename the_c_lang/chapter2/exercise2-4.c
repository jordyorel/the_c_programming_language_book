// An alternative version of squeeze(s1,s2) that deletes each character in
// s1 that matches any character in the string s2.

#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j, k = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        int found = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}

int main() {
    char str[100] = "Hello, ";
    char t[] = "world!";

    squeeze(str, t);

    printf("%s\n", str);
    return 0;
}
