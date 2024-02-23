#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float farhToCelsius(float farh);
float celsiusToFarh(float celsius);
int main() {

    float fahr, celsius;
    printf("Farh to celsius\n");


    printf("Farh to celsius: \n");
    for (fahr = UPPER; fahr >= LOWER; fahr-=STEP){
        printf("%.1f farh = %.2f celsius\n",fahr, farhToCelsius(fahr));
    }

    printf("\n");
    printf("Celsius to farh: \n");
    for(celsius = LOWER; celsius <= UPPER; celsius+=STEP) {
        printf("%.1f celsius =  %.2f farh\n", celsius, (9.0 / 5.0) * (celsius + 32));
    }


    return 0;
}

float farhToCelsius(float farh) {
    return (5.0 / 9.0) * (farh - 32);
}

float celsiusToFarh(float celsius) {
    return (9.0 / 5.0) * (celsius + 32);
}

