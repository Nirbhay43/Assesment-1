// Create menu driven calculator using function :

#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
void displayMenu();

int main() {
    int choice;
    float num1, num2, result;

    // Loop for repeated operation until user exits
    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\n--- Addition ---\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                printf("\n--- Subtraction ---\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                printf("\n--- Multiplication ---\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                printf("\n--- Division ---\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;

            case 5:
                printf("Thank you for using the calculator.\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while(choice != 5); // Continue until user chooses to exit

    return 0;
}

// Function to display the main menu
void displayMenu() {
    printf("\n---------- MENU -----------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("------------------------------\n");
}

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    return a / b;
}

