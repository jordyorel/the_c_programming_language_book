#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAXOP 100 
#define NUMBER '0'
#define MAXVAL 100  /* maximum depth of val stack */ 
#define BUFSIZE 100

char bufsize[BUFSIZE];
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */ 

double val[MAXVAL];  /* value stack */ 
int sp = 0; /* next free stack position */ 

/* push: push f onto value stack */ 
void push(double f) {
    if(sp < MAXVAL) {
        val[sp++] = f;
    } else {
        printf("error: stack overflow\n");
    }
}

/* pop: pop and return top value from stack */ 
double pop(void) {
    if(sp > 0) {
        return val[--sp];
    } else {
        printf("error: stack underflow\n");
        return 0.0;
    }
}

void swap() {
    double element1 = pop();
    double element2 = pop();

    push(element1);
    push(element2);

}

void clear() {
    while (sp > 0) {
        val[--sp] = 0.0;
    }
}

double top() {
    if(sp > 0) {
        return val[sp - 1];
    } else {
        printf("Error: stack empty\n");
        return 0.0;
    }
}

void duplicate() {
    push(top());
}

/* get a (possibly pushed-back) character */ 
int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if(bufp >= BUFSIZE) {
        printf("ungetch: too many characters\n");
    } else {
        buf[bufp++] = c;
    }
}

int getop(char s[]) {
    int i, c;
    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;
    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;
        if(c == '.')
            while(isdigit(s[++i] = c = getch()))
        s[i] = '\0';
        if (c != EOF)
        ungetch(c);
        return NUMBER; 
}


int main() {
    int type;
    double op2;
    char token [MAXOP];

    while((type = getop(token)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(token));
            break;
        case '+':
            if (sp > 1) {
                push(pop() + pop());
            } else {
                printf("Error: insufficient operands for +\n");
            }
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            if (sp > 1) {
                op2 = pop();
                if (op2 != 0.0) {
                    push(pop() / op2);
                } else {
                    printf("Error: zero divisor\n");
                }
            } else {
                printf("Error: insufficient operands for division\n");
            }
            break;
        case '%':
            op2 = pop();
            if(op2 != 0.0){
                push((int)pop() % (int)op2);
            } else {
                printf("Error: zero divisor");
            }
            break;
        case 'c':
            clear();
            printf("Stack cleared\n");
            break;
        case 'd':
            duplicate();
            printf("Top element duplicated\n");
            break;
        case 's':
            if (sp > 1) {
                swap();
                printf("Element swaped on the stack\n");
            } else {
                printf("Error: insufficient operands for swap\n");
            }
            break;
        case '?':
            printf("Top element on the stack: %.2f\n", top());
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("Error: unknown command %s\n", token);
            break;
        }
    }
    return 0;
}
