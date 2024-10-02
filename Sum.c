#include <stdio.h>
#include <conio.h>

// "%d" - Integer
//
//



int main() {
    int num1, num2, sum;

    // Asking for input
    printf("Enter the first number: ");
    scanf("%d", &num1); //Input
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Adding the two numbers
    sum = num1 - num2;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}