#include<stdio.h>

#define EXPONENT 10

int power(int base, int n);


int main() {

    for (size_t i = 0; i < EXPONENT; i++) {
        printf("%zu %d %d\n", i , power(2, i), power(-3, i));

    }
    

    return 0;
}

// int power(int base, int n) {
//     int p, i;
//     p = 1;
//     for(i = 1; i <= n; i++) {
//         p *= base;
//     }
//     return p;
// }

int power(int base, int n) {
    int p = 1;
    for(p = 1; n > 0; n--){
        p*=base;
    }
    return p;
}