#include <stdio.h>

int main() {
    int n1;

    printf("Enter number: ");
    scanf("%d", &n1);

    if (n1%2==0) {
        printf("Even.");
    }
    else {
        printf("Odd.");
    }
}