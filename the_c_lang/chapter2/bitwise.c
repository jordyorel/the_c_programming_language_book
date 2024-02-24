#include<stdio.h>

int main() {
    /* bitwise AND &
        - If both bits are 1, then the result is 1.
        - If any bits is 0, the result is 0.
          101010
        & 110011
        --------
          100010

        1 & 1 = 1
        1 & 0 = 0
        0 & 1 = 0
        0 & 0 = 0
    */
    int p = 10; 
    int q = 6;
    printf("p & q = %d\n", p & q);

    /*  bitwise inclusive OR |
        - If any bits is 1, the result is 1.
        - If both bits are 0 the result is 0.
        example:
          101010
        | 110011
        --------
          111011

        1 | 1 = 1
        1 | 0 = 1
        0 | 1 = 1
        0 | 0 = 0

    */
    printf("p | q = %d\n", p | q);

    /* Bitwise exclusive OR
        - if both bits are same, the output is 0.
        - if the bits are different, the output is 1.
        example:
        101010
      ^ 110011
        --------
        011001

    1 ^ 1 = 0
    1 ^ 0 = 1
    0 ^ 1 = 1
    0 ^ 0 = 0

    */
    printf("p ^ q = %d\n", p ^ q);

    printf("%d\n", p & q && q + 1 || 0);


    /* Left shift. */
    int a = 10;
    printf("a << 2 = %d\n", a << 2); // a * 2^2
    printf("(a + 1) << 2 = %d\n", (a + 1) << 2); // (a + 1) * 2^2
    printf("(a + 2) << 2 = %d\n", (a + 2) << 2); // (a + 2)  * 2^2

    /* Right shift. */
    int c = 10;
    printf("c >> 2 = %d\n", c >> 2); // c / 2ˆ2
    printf("c + 1) >> 2 = %d\n", (c + 1) >> 2); // (c + 1) / 2^2
    printf("c >> 4 = %d\n", c >> 4); // (c + 1) / 4^2

    /* One's complement */
    int x = 4;
    printf("~x = %d\n", ~x); // -(a + 1)
    printf("~(x + 1) = %d\n", ~(x + 1)); // -(a + 1 + 1)

    return 0;
}
