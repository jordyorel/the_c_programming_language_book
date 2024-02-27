//  Write a function escape(s,t) that converts characters like newline and tab
// into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
// a function for the other direction as well, converting escape sequences into the real characters.

#include <stdio.h>
#include <string.h>

void escape(char s[], const char t[]) {
    int i = 0, j = 0;
    while (t[i] != '\0') {
        switch (t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j++] = '\n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = '\t';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        i++;
    }
    s[j] = '\0';
}

void unescape(char s[], const char t[]) {
    size_t i = 0, j = 0;

    while (t[i] != '\0') {
        if (t[i] == '\\' && (t[i + 1] == 'n' || t[i + 1] == 't')) {
            switch (t[i + 1]) {
            case 'n':
                s[j++] = '\n';
                break;
            case 't':
                s[j++] = '\t';
                break;
            }
            i += 2; // Skip both '\\' and the following character
        }
        else {
            s[j++] = t[i++];
        }
    }

    s[j] = '\0'; 
}

int main(){
    const char original[] = "Hello\nWorld\t!";
    char escaped[2 * sizeof(original)]; // Maximum length assuming every character needs escaping
    char unescaped[sizeof(original)];

    escape(escaped, original);
    printf("Original: %s\n", original);
    printf("Escaped : %s\n", escaped);

    unescape(unescaped, escaped);
    printf("Unescaped: %s\n", unescaped);
    return 0;
}