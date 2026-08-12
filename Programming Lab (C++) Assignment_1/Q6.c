//write a program in c to develop a menu driven calculator for arthimetic operations

#include <stdio.h>

void calculator()
{
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid Choice");
    }
}

int main()
{
    calculator();

    return 0;
}