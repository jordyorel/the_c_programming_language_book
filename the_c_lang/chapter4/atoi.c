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

int atoa(int n, char s[]) {
    int i, sign;

    if((sign = n) < 0) {
        n = -n;
    }
    i = 0;

    s[i++] = n % 10 + '0'; /* Get the next digit. */  
    itoa((n /= 10), s);

    if(sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    char s[] = "-1234";
    int n = strlen(s);

    printf("h = %d\n", atoa(n, s));
    return 0;
}