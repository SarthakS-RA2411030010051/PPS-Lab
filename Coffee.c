#include <stdio.h>
#include <conio.h>


int main() {
    int vol,caf1,caf2,caf3,caf4;

    printf("Enter volume of coffee taken (in oz): ");
    scanf("%d", &vol);

    caf1 = vol*0.2875;
    caf2 = vol*11.875;
    caf3 = vol*7.5;
    caf4 = vol*60.1;

    printf("1. Decaf will contain %d mg of caffeine in %d oz\n",caf1,vol);
    printf("2. Brewed will contain %d mg of caffeine in %d oz\n",caf2,vol);
    printf("3. Instant will contain %d mg of caffeine in %d oz\n",caf3,vol);
    printf("4. Espresso will contain %d mg of caffeine in %d oz\n",caf4,vol);

};