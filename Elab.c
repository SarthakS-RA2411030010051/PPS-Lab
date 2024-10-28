#include <stdio.h>

int main()
{
    float num1, num2;
    double resnum1, resnum2;

    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 >= 101.00 || num2 >= 101.00)
    {
        resnum1 = (double)num1;
        printf("%.2lf", resnum1);

        resnum2 = (double)num2;
        printf("%.2lf", resnum2);
    }
    return 0;
}