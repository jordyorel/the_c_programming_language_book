// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
    int c, bl = 0, tabs = 0, nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' ) {
            ++bl;
            // printf("%d", bl);
        }else if(c == '\t'){
            ++tabs;
            // printf("%d\n", tabs);
        }else if(c == '\n') {
            ++nl;
            // printf("%d\n", nl);
        }
        
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", bl, tabs, nl);
    return 0;
}