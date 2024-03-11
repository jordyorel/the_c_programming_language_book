#include<stdio.h>


int main() {
    int x = 10, y, z[10] = {1,2,3,4,5};

    int *ip;
    int *iq;
    ip = &x;
    (*ip)++;

    iq = ip;

    y = *ip + 1;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("iq = %d\n", *iq);
    return 0;
}