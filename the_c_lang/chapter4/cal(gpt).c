#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100
#define NUMBER '0'

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

int top(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: stack empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top];
}

void duplicate(Stack *stack) {
    int topElement = top(stack);
    push(stack, topElement);
}

void swap(Stack *stack) {
    if (stack->top < 1) {
        printf("Error: insufficient operands for swap\n");
        exit(EXIT_FAILURE);
    }

    int topElement = pop(stack);
    int secondElement = pop(stack);

    push(stack, topElement);
    push(stack, secondElement);
}

void clear(Stack *stack) {
    stack->top = -1;
}

int getop(char *expression, int *index) {
    char c;
    while ((c = expression[(*index)++]) == ' ' || c == '\t')
        ;

    if (!isdigit(c) && c != '.') {
        return c; // Operator or other character
    }

    int i = 0;
    do {
        expression[i++] = c;
        c = expression[(*index)++];
    } while (isdigit(c) || c == '.');

    expression[i] = '\0';
    (*index)--; // Move back one step to account for non-digit character

    return NUMBER; // Numeric operand
}


int evaluateExpression(char *expression) {
    Stack stack;
    initialize(&stack);

    int index = 0;
    int type;
    char token[MAX_SIZE];

    while ((type = getop(expression, &index)) != '\0') {
        if (type == NUMBER) {
            push(&stack, atoi(token));
        } else if (type == '+' || type == '-' || type == '*' || type == '/') {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;
            switch (type) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 != 0) {
                        result = operand1 / operand2;
                    } else {
                        printf("Error: Division by zero\n");
                        exit(EXIT_FAILURE);
                    }
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    exit(EXIT_FAILURE);
            }
            push(&stack, result);
        } else if (type == 'c') {
            clear(&stack);
        } else if (type == 'd') {
            duplicate(&stack);
        } else if (type == 's') {
            swap(&stack);
        } else if (type == '?') {
            printf("Top element on the stack: %d\n", top(&stack));
        }
    }

    return pop(&stack);
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter the expression: ");
    fgets(expression, MAX_SIZE, stdin);

    int result = evaluateExpression(expression);

    printf("Result: %d\n", result);

    return 0;
}
