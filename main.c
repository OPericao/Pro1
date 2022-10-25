#include <stdio.h>

int main()
{
    int fmax,fmin;
    float cmax,cmin;
    char ciudad[59+1];
    printf("Introduzca el nombre de la ciudad:");
    scanf("%s",&ciudad);
    printf("\nIntroduzca la temperatura maxima en grados Fahrenheit:");
    scanf("%d",&fmax);
    printf("\nIntroduzca la temperatura minima en grados Fahrenheit:");
    scanf("%d",&fmin);
    cmax=(fmax-32)/1.8;
    cmin=(fmin-32)/1.8;
    printf("\n---------------------------------%s----------------------------",ciudad);
    printf("\n\tTMax (F)\tTmin (F)\tTmax (C)\tTmin (C)");
    printf("\n\t%d F\t\t%d F\t\t%.2f C\t\t%.2f C", fmax, fmin, cmax, cmin);
    printf("\n-----------------------------------------------------------------");

    return 0;
}
