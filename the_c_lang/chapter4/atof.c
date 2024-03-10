#include<stdio.h>
#include<ctype.h>

#define MAXLINE 100

 /* getline: read a line into s, return length */
 int _getline(char s[],int lim) {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
 } 

// /* atof: convert string s to double */ 
// double atof(char s[]) {
//     double val, power;
//     int i, sign, expSign, exp;

//     for(i = 0; isspace(s[i]); i++)
//         ;
//     sign = (s[i] == '-') ? -1 : 1;
//     if(s[i] == '+' || s[i] == '-')
//         i++;
//     for(val = 0.0; isdigit(s[i]); i++)
//         val = 10.0 * val + (s[i] - '0');
//     if(s[i] == '.')
//         i++;
//     for(power = 1.0; isdigit(s[i]); i++) {
//         val = 10.0 * val + (s[i] - '0'); 
//         power *= 10;
//     }

//     if(s[i] == 'e' || s[i] == 'E') {
//         i++;
//         expSign = (s[i] == '-') ? -1 : 1;
//         if(s[i] == '-' || s[i] == '+')
//             i++;
//         for(exp = 0; isdigit(s[i]); i++)
//             exp = 10.0 * exp + (s[i] - '0'); 
//         while(exp-- > 0) {
//             if(expSign == 1)
//                 power *= 10;
//             else
//                 power /= 10;
//         }
//     }

//     return sign * val / power; 
// }


 /* rudimentary calculator */
 int main() {
    double sum, atof(char []);
    char line[MAXLINE];
    int _getline(char line[], int max);

    sum = 0;
    while (_getline(line, MAXLINE) > 0)

    printf("\t%g\n", sum += atof(line));
    return 0;
 } 