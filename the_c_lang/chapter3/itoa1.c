 /* itoa: convert n to characters in s */ 

#include<stdio.h>
#include<string.h>

void reverse(char s[]) {
    int i, j, c;
    for(i=0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;

    }
}

int atoi(int n, char s[]) {
    int i, sign;

    if((sign = n) < 0) {
        n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0'; /* Get the next digit. */
    } while ((n /= 10) > 0);
    if(sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
    
}

int main() {
    char s[] = "-1234";
    int n = strlen(s);

    printf("h = %d\n", atoi(n, s));
    return 0;
}