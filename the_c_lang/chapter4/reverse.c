#include<stdio.h>
#include<string.h>

void reverse(char s[], int i, int j) {
    if(i < j)  {
        char c = s[i];
        s[i++] = s[j];
        s[j++] = c;
        // i++;
        // j--;
        reverse(s, i, j);
    }
}


int main() {
    char s[] = "Hello les amis je suis entrain dde coder ce mushibishi";
    int len = strlen(s);

    reverse(s, 0, len -1 );

    printf("%s\n", s);
    return 0;
}

