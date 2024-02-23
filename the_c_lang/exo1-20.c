#include <stdio.h>
#include<string.h>

// Symbolic representation using a constant
#define TAB_STOP_INTERVAL 4

void detab(char input[], size_t len);

int main() {
    char input[] = "This\ttext\tcontains\ttabs";
    size_t len = strlen(input);
    
    detab(input, len);

    printf("%s\n", input);

    return 0;
}

// void detab(char s[], size_t len) {
//     for(size_t i = 0; i < len; ++i) {
//         if(s[i] == '\t') {
//             for (size_t j = i; j < i + TAB_STOP_INTERVAL; ++j) {
//                 s[j] = ' ';
//             }
//         }
//     }
// }

// void detab(char s[], size_t len) {
//     for (size_t i = 0; i < len; ++i) {
//         if (s[i] == '\t') {
//             // Replace tab with spaces
//             for (size_t j = i; j < i + TAB_STOP_INTERVAL; ++j) {
//                 s[j] = ' ';
//             }
//         }
//     }
// }


void detab(char s[], size_t len) {
    int pos = 1;
    for (size_t i = 0; i < len; ++i){
        if(s[i] == '\t') {
            int space = TAB_STOP_INTERVAL - ((pos -1) % TAB_STOP_INTERVAL);
            for (size_t j = 0; i < space; ++j) {
                s[i++] = ' ';
                pos++;
            }
        }else if(s[i] == '\n'){
            pos = 1;
        }else {
            pos ++;
        }
    }
    
}

// void replace_non_breaking_spaces(char input[], size_t len)
// {
//     for (size_t i = 0; i < len; ++i)
//     {
//         if (input[i] == '\xA0')
//         { // Non-breaking space character
//             input[i] = ' ';
//         }
//     }
// }


