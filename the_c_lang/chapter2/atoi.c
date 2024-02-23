// atoi, converts a string of digits into its numeric equivalent

#include<stdio.h>
#include<string.h>

int atoi(char s[]) {
    int i, n = 0;

    // for(int i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    //     n = 10 * n + (s[i] - '0');
    // }

    // for(int i = 0; i < strlen(s); i++) {
    //     if(s[i] >= '0' && s[i] <= '9') {
    //         n = 10 * n + (s[i] - '0');
    //     }
    // }

    while(s[i] != '\0' && s[i] != '\n') {
        if (s[i] >= '0' && s[i] <= '9'){
            n = 10 * n + (s[i] - '0');
        }
        i++;
    }
    return n;
}


int main() {
    char s []= "1234";

    printf("h = %d\n", atoi(s));


    return 0;
}