#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    myNumbers[1] = 125;
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
}