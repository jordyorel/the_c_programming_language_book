// In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
// in x.Explain why.Use this observation to write a faster version of bitcount.

#include<stdio.h>

int bitcount(unsigned x) {
    int count = 0;
    while(x != 0) {
        x &= (x -1);
        count++;
    }
    return count;
}

int main() {
    unsigned x = 6;

    int numbit = bitcount(x);
    printf("Number of bi in %d: %d \n", x, numbit);
    return 0;
}