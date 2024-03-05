/* itoa: convert n to characters in s */

#include<stdio.h>
#include<ctype.h>


int atoi(char s[]) {
    int i, n, sign;
    for(i = 0; isspace(s[i]); i++);
    
    /* if s[i] is - then sign = -1 else sign = 1. */
    sign = (s[i] == '-') ? -1 : 1;

    /* if s[i] is + or - then increment i, skip the sign. */
    if(s[i] == '+' || s[i] == '-') 
    	i++;
    for(n = 0; isdigit(s[i]); i++)
        /* convert the string to integer. */
        n = 10 * n + (s[i] - '0'); // 
    
    return sign * n;
}

int  main() {
    char s[] = "-1234";

    printf("h = %d\n", atoi(s));
}
