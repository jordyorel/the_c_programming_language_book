#include <stdio.h>


int main() {
    int c ; 
    int lim = 100;

    for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)


    for(int i = 0; i < lim -1; ++i) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        if (c == EOF) {
            break;
        }
    }


        return 0;
}