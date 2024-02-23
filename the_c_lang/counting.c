#include<stdio.h>

int main() {

    double nc;
    nc = 0;

    // counting new caracter
    // while loop
    // while (getchar() != 0) {
    //     nc++;
    //     printf("%ld\n", nc);
    // }

    // // for loop
    // for (nc = 0 ; getchar() != EOF; ++nc)
    // {
    //     printf("%.0f\n", nc);
    // }
    

    // counting new line
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n'){
            ++nl;
            printf("%d\n", nl);
        }
    }

    // int bits;
    // bits = sizeof(long) * 8;
    // printf("%d bits\n", bits);
    
    return 0;

}