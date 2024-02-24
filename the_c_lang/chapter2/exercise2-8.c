// Write a function rightrot(x,n) that returns the value of the integer x rotated
// to the right by n positions.

#include<stdio.h>

unsigned long rightrot(long x, long n) {
    long bit_count = sizeof(int) * 8;
    n %= bit_count;

    return (x >> n) | (x << (bit_count - n));
}

int main() {

    long x = 10;
    long n = 4;

    printf("x >> n = %lu\n", rightrot(x, n));
    return 0;
}