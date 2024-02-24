// Write a function invert(x,p,n) that returns x with the n bits that begin at
// position p inverted(i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

#include<stdio.h>
unsigned int revert(unsigned int x, int p, int n) {
    unsigned int max = ~(0 << n) << (p -n + 1);

    x = x ^ max;
    return x;
}
int main() {
    unsigned int x = 170;
    int p = 5;
    int n = 3;
    unsigned int result = revert(x, p, n);

    printf("Result = %d\n", result);


    return 0;
}