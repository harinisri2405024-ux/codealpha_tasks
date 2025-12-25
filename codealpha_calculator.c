#include <stdio.h>

int main() {
    char op;
    float a, b, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
