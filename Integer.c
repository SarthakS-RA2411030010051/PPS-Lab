#include <stdio.h>

int main() {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("%d is positive",x);
    }
    else if (x == 0) {
        printf("%d is 0", x);
    }
    else {
        printf("%d is negative",x);
    }
}