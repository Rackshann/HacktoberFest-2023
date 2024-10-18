#include <stdio.h>
#include <math.h>

// Function prototypes
void basicArithmetic();
void trigonometricFunctions();
void exponentialAndLogarithmicFunctions();
void squareRoot();

int main() {
    int choice;

    while (1) {
        printf("\nAdvanced Calculator\n");
        printf("1. Basic Arithmetic Operations\n");
        printf("2. Trigonometric Functions\n");
        printf("3. Exponential and Logarithmic Functions\n");
        printf("4. Square Root\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basicArithmetic();
                break;
            case 2:
                trigonometricFunctions();
                break;
            case 3:
                exponentialAndLogarithmicFunctions();
                break;
            case 4:
                squareRoot();
                break;
            case 5:
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void basicArithmetic() {
    int operation;
    double x, y;

    printf("\nBasic Arithmetic Operations\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Back\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &operation);

    if (operation == 5) return; // Go back

    printf("Enter the first number: ");
    scanf("%lf", &x);
    printf("Enter the second number: ");
    scanf("%lf", &y);

    switch (operation) {
        case 1:
            printf("Result: %.2lf\n", x + y);
            break;
        case 2:
            printf("Result: %.2lf\n", x - y);
            break;
        case 3:
            printf("Result: %.2lf\n", x * y);
            break;
        case 4:
            if (y != 0)
                printf("Result: %.2lf\n", x / y);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void trigonometricFunctions() {
    int function;
    double angle;

    printf("\nTrigonometric Functions\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("4. Back\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &function);

    if (function == 4) return; // Go back

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);
    angle = angle * (M_PI / 180.0); // Convert to radians

    switch (function) {
        case 1:
            printf("Result: %.2lf\n", sin(angle));
            break;
        case 2:
            printf("Result: %.2lf\n", cos(angle));
            break;
        case 3:
            printf("Result: %.2lf\n", tan(angle));
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void exponentialAndLogarithmicFunctions() {
    int function;
    double x;

    printf("\nExponential and Logarithmic Functions\n");
    printf("1. Exponential\n");
    printf("2. Natural Logarithm\n");
    printf("3. Back\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &function);

    if (function == 3) return; // Go back

    printf("Enter the number: ");
    scanf("%lf", &x);

    switch (function) {
        case 1:
            printf("Result: %.2lf\n", exp(x));
            break;
        case 2:
            if (x > 0)
                printf("Result: %.2lf\n", log(x));
            else
                printf("Error: Logarithm of non-positive number is not a real number.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void squareRoot() {
    double x;

    printf("\nSquare Root\n");
    printf("Enter the number: ");
    scanf("%lf", &x);

    if (x < 0)
        printf("Error: Square root of negative number is not a real number.\n");
    else
        printf("Result: %.2lf\n", sqrt
