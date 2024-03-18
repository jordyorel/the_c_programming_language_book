#include<stdio.h>


int main() {
    // int x = 10, y, z[10] = {1,2,3,4,5};

    // int *ip;
    // int *iq;
    // ip = &x;
    // (*ip)++;

    // iq = ip;

    // y = *ip + 1;
    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("iq = %d\n", *iq);


    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = &a[0];
    *p = *(p + 1);
    int x = *p; // x = a[1]
    printf("x = %d\n", x);



    return 0;
}