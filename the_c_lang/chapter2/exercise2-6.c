// Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
// position p set to the rightmost n bits of y, leaving the other bits unchanged.

#include<stdio.h>

unsigned int setbit(unsigned int x, int p, int n, unsigned int y) {
    unsigned int mask = ~(~0 << n) << (p - n + 1);
    x = x & ~mask;

    unsigned int rightmost_y = y & ~(~0 << n);

    x = x | rightmost_y << (p - n + 1);
    return x;
}

int main() {
    unsigned int x = 170;
    int p = 5;
    int n = 3;
    unsigned int y = 6;
    unsigned int result = setbit(x, p, n, y);

    printf("Result = %d\n", result);

    return 0;
}