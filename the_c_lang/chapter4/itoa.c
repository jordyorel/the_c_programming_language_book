/* itoa: convert n to characters in s */ 

#include<stdio.h>
#include<string.h>

void recursive_itoa(int n, char s[]) {
     static int i;

    if(n < 0) {
        s[i++] = '-';
        n = -n;
    }

    if(n / 10 != 0) {
        recursive_itoa(n / 10, s);
    }
    s[i++] = n % 10 + '0'; /* Get the next digit. */  

    s[i] = '\0';
}

int main() {
    int num = -12345;
    char result[20];

    recursive_itoa(num, result);

    printf("Integer: %d\nString: %s\n", num, result);

    return 0;
}
