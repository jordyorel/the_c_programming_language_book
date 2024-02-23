# include<stdio.h>

int main() {

    // printf("Hello World\n");

    int c;
    printf("Enter a character: ");
    while ((c = getchar()) != EOF){
        putchar(c);
    }

    return 0;
}