#include <stdio.h>
int main()
{
    float a, b;
    int choice, typeChoice;
    float result;

    printf("Choose an operation:\n");
    printf("1. Division between a and b\n");
    printf("2. Multiplication between a and b\n");
    printf("3. Sum of a and b\n");
    printf("4. Difference between a and b\n");
    printf("Enter your Choice (1, 2, 3, or 4): ");
    scanf("%d", &choice);
    system("cls");

    // Prompt for the typecasting choice only if a valid operation was selected
    if (choice >= 1 && choice <= 4)
    {
        printf("Choose an option:\n");
        printf("1. Result without typecasting (mimic integer-only calculation)\n");
        printf("2. Result with typecasting (accurate decimal calculation)\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &typeChoice);
        system("cls");

        printf("Enter the value of a: ");
        scanf("%f", &a);
        printf("Enter the value of b: ");
        scanf("%f", &b);
        system("cls");

        // Perform operation based on choice
        if (choice == 1) // Division
        {
            if (typeChoice == 1)
                result = (int)a / (int)b; // Integer division (no typecasting)
            else
                result = a / b; // Float division (with typecasting)
            printf("Result: %.2f\n", result);
        }
        else if (choice == 2) // Multiplication
        {
            if (typeChoice == 1)
                result = (int)a * (int)b; // Integer multiplication
            else
                result = a * b; // Float multiplication
            printf("Result: %.2f\n", result);
        }
        else if (choice == 3) // Addition
        {
            if (typeChoice == 1)
                result = (int)a + (int)b; // Integer addition
            else
                result = a + b; // Float addition
            printf("Result: %.2f\n", result);
        }
        else if (choice == 4) // Subtraction
        {
            if (typeChoice == 1)
                result = (int)a - (int)b; // Integer subtraction
            else
                result = a - b; // Float subtraction
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
