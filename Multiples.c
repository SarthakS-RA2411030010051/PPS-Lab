#include <stdio.h>
int main()
{
int n, a,p;

printf("Enter number 1: ");
scanf("%d", &n);

printf("Enter number 2: ");
scanf("%d",&a);

int i = 1;
while (i<=a){
    p=n*i;
    printf("%d*%d=%d\n",n,i,p);
    i++;
}

return 0;
}