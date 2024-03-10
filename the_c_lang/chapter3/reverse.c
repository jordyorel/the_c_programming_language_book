#include<stdio.h>
#include<string.h>

void reverse(char s[]) {
    int i, j, temp;
    for(i=0, j = strlen(s)-1; i<j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char s[] = "Hello les amis je suis entrain dde coder ce mushibishi";

    reverse(s);

    printf("%s\n", s);
    return 0;
}