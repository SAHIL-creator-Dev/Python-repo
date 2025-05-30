#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    double a, b;

    while (1) {
        printf("Enter an operator (+, -, *, /), if you want to exit press x: ");
        scanf(" %c", &ch);

        if (ch == 'x') {
            exit(0);
        }

        printf("Enter two operands: ");
        scanf("%lf %lf", &a, &b);

        switch (ch) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
                break;
            default:
                printf("Error! Please enter a valid operator.\n");
        }
    }
}