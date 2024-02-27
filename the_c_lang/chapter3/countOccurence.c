#include<stdio.h>

int main() {
    int c, nwhite, nother, ndigit[10];

    nwhite = 0; nother = 0;
    for(int i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF) {
        switch (c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            /* In case c is a digit ('0' - '9'), increment the count of that 
             digit. The expression c - '0' is to say if c is '7', then c - '0' is 7. */
            ndigit[c - '0']++; 
            break;
        case ' ':
        case '\n':
        case '\t':
            nwhite++;
            break;
        default:
            nother++;
            break;
        }
    }

    printf("digit = ");
    for(int i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf("nwhite = %d\n", nwhite);
    printf("nother = %d\n", nother);
    return 0;
}