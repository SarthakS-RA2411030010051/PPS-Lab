#include <stdio.h>

int main(){
    int n, d;

    printf("Enter number to check prime number: ");
    scanf("%d", &n);

    if (n%2==0){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
}