#include<stdio.h>

int main() {
    // for(int i = 1; i < 1000; i *= 2){
    //     printf("%d\n", i);
    // }

    for(float i = 1000; i >= 1; i /= 2){
        printf("%.2f\n", i);

    }
    return 0;
} 
