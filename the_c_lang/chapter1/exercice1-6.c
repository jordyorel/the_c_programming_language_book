#include <stdio.h>


int main() {
    
    // Verify that the expression getchar() != EOF is 0 or 1
    int result;
    printf("Enter a caracter: ");
    result = getchar() != EOF;
    printf("%d\n", result);

    return 0;
}