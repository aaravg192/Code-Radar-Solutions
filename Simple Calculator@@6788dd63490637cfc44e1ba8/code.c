#include <stdio.h>

int main() {
    float a, b;
    char ch;

    // Input two numbers
    scanf("%f %f", &a, &b);

    // Input the operator (with leading space to consume newline)
    scanf(" %c", &ch);

    // Switch case for operations
    switch (ch) {
        case '+':
            printf("%d\n", (int)(a + b));
            break;
        case '-':
            printf("%d\n", (int)(a - b));
            break;
        case '*':
            printf("%d\n", (int)(a * b));
            break;
        case '/':
            if (b != 0) 
                printf("%d\n", (int)(a / b)); // Explicit integer conversion
            else 
                printf("Division by zero error\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
