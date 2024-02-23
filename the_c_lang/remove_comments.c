#include<stdio.h>

void remove_comments(char *c_code);

int main() {
    char c_code[] = "/* This is a\n"
                    "   multiline C\n"
                    "   style comment */\n"
                    "\n"
                    "#include <stdio.h>\n"
                    "\n"
                    "// This is a C++ style comment\n"
                    "\n"
                    "int main() {\n"
                    "    /* Another C style comment */\n"
                    "    printf(\"Hello, World!\\n\"); // Print Hello World\n"
                    "    return 0;\n"
                    "}\n";

    // Remove comments
    remove_comments(c_code);

    // Print the result
    printf("C code without comments:\n%s", c_code);

    return 0;
}

void remove_comments(char* c_code) {
    int inside_comment = 0;
    char* output = c_code;
    while(*c_code) {
        if(!inside_comment) {
            if(*c_code == '/' && *(c_code + 1) == '*') {
                inside_comment = 1;
                c_code++;
            }else if(*c_code == '/' && *(c_code + 1) == '/') {
                while(*c_code != '\n') {
                    c_code++;
                }
                *output ++ = '\n';
            } else {
                *output++ = *c_code;
            }
        } else {
            if(*c_code == '*' && *(c_code + 1) == '/') {
                inside_comment = 0;
                c_code += 2;
            }
        }
        c_code++;
    }
    *output = '\0';
}
