#include <stdio.h>
int check_armstrong(int);

int main()
{

    int start, end, i;
    scanf("%d %d", &start, &end);

    if (start <= 0 || start >= 50 || end <= 0 || end >= 1000)
    {
        printf("Invalid Output");
    }
    else
    {
        for (i = start; i <= end; i++)
        {
            check_armstrong(i);
        }
    }

    return 0;
}

int check_armstrong(int n)
{
    printf("%d ", n);

    return 0;
}