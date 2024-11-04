#include <stdio.h>

int check_armstrong(int);

int main()
{
    int start, end, i;
    scanf("%d %d", &start, &end);

    i = start;

    if (start < 0 || start > 50 || end < 0 || end > 1000)
    {
        printf("Invalid Input");
    }
    else
    {
        while (start <= end)
        {
            check_armstrong(i);
            i++;
            start++;
        }
    }
    return 0;
}

int check_armstrong(int n)
{
    int originalNum, remainder, sum = 0;

    originalNum = n;

    while (originalNum != 0)
    {

        remainder = originalNum % 10;

        sum += remainder * remainder * remainder;

        originalNum /= 10;
    }

    if (n == sum)
        printf("%d ", n);

    return 0;
}