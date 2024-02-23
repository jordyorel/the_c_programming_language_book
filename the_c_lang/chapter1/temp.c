#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr, celsius;
    // int lower, upper, step;

    // lower = 0; // lower limit of temperature table
    // upper = 300; // upper limit
    // step = 20; // step size

    // fahr = lower;

    // while (fahr <= upper)
    // {
    //    celsius = 5 * (fahr - 32) / 9;
    //    printf("%d\t%d\n", fahr, celsius);
    //     fahr+= step;
    // }

    printf("Farh to celsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr-=STEP) {
        printf("%.1f farh = %.2f celsius\n",fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("\n");

    // celsius to farh
    printf("Celsius to farh\n");
    for (celsius = LOWER; celsius <= UPPER; celsius+=STEP) {
        printf("%.1f celsius =  %.2f farh\n", celsius, (9.0 / 5.0) * (celsius + 32));
    }

    return 0;
}