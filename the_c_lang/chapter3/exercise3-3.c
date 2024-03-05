#include <stdio.h>


void expand(char s1[], char s2[]) {
    int i, j, c;
    i = j = 0;
    while ((c = s1[i++]) != '\0')
        if (s1[i] == '-' && s1[i + 1] >= c) {
            i++;
            while (c < s1[i])
                s2[j++] = c++;
        } else
            s2[j++] = c;

    s2[j] = '\0';
}

int main() {
    char input[] = "a-z-0-9";
    char output[100];

    expand(input, output);

    printf("Expanded: %s\n", output);
    return 0;
}