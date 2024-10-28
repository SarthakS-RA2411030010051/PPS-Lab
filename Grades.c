#include <stdio.h>

int main()
{
    int attend;

    printf("Enter attendance out of 100: ");
    scanf("%d", &attend);

    if (attend >= 75)
    {
        printf("Can appear for exams");
    }
    else
    {
        printf("Can not appear for exams");
    }
}