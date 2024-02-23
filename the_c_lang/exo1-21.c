#include <stdio.h>
#include <string.h>

// Symbolic representation using a constant
#define TAB_STOP_INTERVAL 4

void entab(char input[], size_t len, int tabstop);

int main() {
    char input[] = "This is a spaced string.";
    size_t len = strlen(input);

    entab(input, len, TAB_STOP_INTERVAL);

    printf("%s\n", input);

    return 0;
}

void entab(char s[], size_t len, int tabstop) {
    int pos = 1;
    for(size_t i = 0; i < len; ++i) {
        if (s[i] == ' ') {
            int sapace_needed = tabstop - ((pos -1) % tabstop);
            if (sapace_needed == 1) {
                s[i] = '\t';
            }else{
                for (size_t j = 0; j < sapace_needed; ++j) {
                    s[i++] = ' ';
                    pos++;
                }
                i--;
            }
        }else if(s[i] == '\n') {
            pos = 1;
        }else{
            pos++;
        }
    }
}