//
// Created by Vividh Prabu on 31/01/26.
//
#include <stdio.h>
#include <ctype.h>
#include <math.h>

char stack[50];
int top = -1;

int valStack[50];
int valTop = -1;

// Stack operations for characters
void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

// Stack operations for values
void pushVal(int x) {
    valStack[++valTop] = x;
}

int popVal() {
    return valStack[valTop--];
}

// Operator precedence
int priority(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

int main() {
    char infix[50], postfix[50];
    int k = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    // Infix to Postfix
    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[k++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop();
        } else {
            while (top != -1 && priority(stack[top]) >= priority(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("Postfix Expression: %s\n", postfix);

    // Postfix Evaluation
    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            pushVal(ch - '0');
        } else {
            int b = popVal();
            int a = popVal();
            switch (ch) {
                case '+': pushVal(a + b); break;
                case '-': pushVal(a - b); break;
                case '*': pushVal(a * b); break;
                case '/': pushVal(a / b); break;
                case '^': pushVal(pow(a, b)); break;
            }
        }
    }

    printf("Evaluated Result: %d\n", popVal());
    return 0;
}
