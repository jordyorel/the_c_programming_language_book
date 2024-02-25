// Bitcont counts the number of digits in a interger

#include<stdio.h>

int bitcount(unsigned x) {
    int b;
    for(b = 0; x != 0; x >>= 1) {
        if(x & 01) {
            b++;
        }
    }
    return b;
}




int main() {
    unsigned x = 6;

    int numbit = bitcount(x);
    printf("Number of bi in %d: %d \n", x, numbit);
    return 0;
}