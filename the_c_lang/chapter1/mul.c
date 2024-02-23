#include <stdio.h>

void mul(int num) {
    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    mul(num);


    return 0;
}
