#include<stdio.h>


void squeeze(char s[], int c) {
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++) {
        if(s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

}

int main() {
    char inputString[100]; 
    int characterToSqueeze;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter a character to squeeze: ");
    scanf("%d", &characterToSqueeze);

    squeeze(inputString, characterToSqueeze);
    
    printf("Squeezed string: %s\n", inputString);

    return 0;
}