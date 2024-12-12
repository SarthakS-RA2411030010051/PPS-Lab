#include <stdio.h>
int main()
{
    int aravspeed, aaronspeed, speeddiff;
    
    scanf("%d %d", &aaronspeed, &aravspeed);
    
    if ( aaronspeed < 20 || aravspeed < 20 || aravspeed > 100 || aaronspeed > 100){
        printf("Invalid input");
    } else {
        (aaronspeed > aravspeed) ? (speeddiff = aaronspeed - aravspeed) : (speeddiff = aravspeed - aaronspeed);
        printf("%d", speeddiff);
    }

	return 0;
}