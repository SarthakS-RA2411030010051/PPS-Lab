#include <stdio.h>
#include <conio.h>


int main() {
    int num1,num2,option,sum,diff,div,prod;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Division\n");
    printf("4. Multiply\n");
    printf("Choose an option : ");
    scanf("%d", &option);

    if (option == 1) {
        sum = num1 + num2;
        printf("Sum is %d", sum);
    }
    else if (option == 2) {
        diff = num1 - num2;
        printf("Difference is %d", diff);
    }
    else if (option == 3) {
        if (num2 == 0) {
            printf("Invalid Division");
        }
        else {
            div = num1/num2;
            printf("Division result is %d", div);
        };
    }
    else if (option == 4) {
        prod = num1 * num2;
        printf("Product is %d", prod);
    };
    printf("\n");
    return 0;
}