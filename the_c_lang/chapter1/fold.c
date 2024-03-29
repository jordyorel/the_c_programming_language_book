#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LINE_LENGTH 1024
#define COLUMN_WIDTH 20
int main() {
    char line[LINE_LENGTH];
    int pos = 0; // current position in the line

    while (fgets(line, sizeof(line), stdin)) { // read one line from input
        for (int i = strlen(line) - 1; i >= 0 && pos + COLUMN_WIDTH > i; --i) {
            if (line[i] != ' ' && line[i] != '\t')
                continue;

            printf("%.*s\n", i - pos, &line[pos]); // print the first part of the line
            pos = i + 1;                           
            break;
        }

        if (pos <= strlen(line)) {
            printf("%s", &line[pos]);
            pos += strlen(&line[pos]);
        }
    }

    return 0;
}