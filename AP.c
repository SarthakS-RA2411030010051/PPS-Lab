#include <stdio.h>

int main(){
    int a1,a2,a3,n,d;
    
    printf("Enter first term: ");
    scanf("%d", &a1);

    printf("Enter second term: ");
    scanf("%d", &a2);

    printf("Enter third term: ");
    scanf("%d", &a3);

    if ((a2-a1)==(a3-a2)) {
        d=a1-a2;
        int a=a1;
        while(a>0){
            printf("%d ",a);
            a=a-d;
        }
        
    }
    else {
        printf("Incorrect AP Series");
    };

}