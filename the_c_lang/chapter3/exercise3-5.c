/* Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.*/

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

void itob(int n, char s[], int b) {
    if(n == 0) {
        s[0] = 0;
        s[1] = '\0';
    }

    int i = 0;
    while(n > 0) {
        int remainder = n % b;
        s[i++] = (remainder < 10) ? remainder + '0' : remainder + 'A' - 10;
        n /= b;
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    int n = 255;
    char s[100];

    itob(n, s, 16);

    printf("Decimal: %d\nHexadecimal: %s\n", n, s);
    return 0;
}