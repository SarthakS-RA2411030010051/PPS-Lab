#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter n1: ");
    scanf("%d",&n1);

    printf("Enter n2: ");
    scanf("%d",&n2);

    if (n1>n2) {
        printf("%d is greater", n1);
    }
    else if (n2>n1) {
        printf("%d is smaller", n1);
    }
    else {
        printf("Both are equal");
    }
}