#include<stdio.h>

#define swap(t,  x, y) do { \
    t temp = x; \
    x = y; \
    y = temp; \
} while(0)

int main() {
    int a = 5, b = 10;
    printf("Before the swap a = %d, b = 5%d\n", a, b);

    swap(int, a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}