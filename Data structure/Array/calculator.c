 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("Press 1 for Addition\n");
        printf("press 2 for Subtraction\n");
        printf("press 3 for Multiplication\n");
        printf("press 4 for Division\n");
         

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}


 