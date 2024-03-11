#include<stdio.h>

void print_binary(unsigned int a) {
    if(a == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32];
    int index = 0;
    while(a > 0) {
        binary[index++] = a % 2;
        a /= 2;
    }

    printf("Binary: ");
    for(int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}



int main() {

    unsigned int a = 27;
    print_binary(a);

    return 0;
}