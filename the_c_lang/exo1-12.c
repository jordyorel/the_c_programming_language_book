#include<stdio.h>
#include<string.h>

#define MAXWORD 100
#define MAXLENGTH 20

void print_histogram(char input[]) {
    int word_length[MAXLENGTH];
    int max = 0;
    int i = 0;
    char* token = strtok(input, " ");
    while(token != NULL && i < MAXLENGTH) {
        int length = strlen(token);
        word_length[i] = strlen(token);
        if (length > max) {
            max = length;
        }
        token = strtok(NULL, " ");
        i++;
    }

    for (int level = max; level > 0; level--) {
        for(int j = 0; j < i; j++) {
            if (word_length[j] >= level){
                printf(" * ");
            }else {
                printf("   ");
            }
        }
    }
    printf("\n");
}

int main() {
    char input[MAXWORD];
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    print_histogram(input);

    return 0;
}