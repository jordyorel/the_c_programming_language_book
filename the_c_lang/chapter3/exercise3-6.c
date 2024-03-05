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

void itoa(int n, char s[], int width) {
    int i, sign;

    sign = (n < 0) ? -1 : 1;
    i = 0;

    do {
        s[i++] = (n % 10 * sign) + '0'; /* Get the next dgit and convert to character*/
    } while((n /= 10) != 0);

    if(sign < 0){
        s[i++] = '-';
    }

    while(i < width) {
        s[i++] = ' ';
    }

    s[i] = '\0';
    reverse(s);

}

int main() {
    int num = -123;
    char buffer[20];
    int width = 8;

    itoa(num, buffer, width);

    printf("Result: \"%s\"\n", buffer);
    return 0;
}
