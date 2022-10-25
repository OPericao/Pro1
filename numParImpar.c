#include <stdio.h>

int main()
{
    int num;
    printf("Introduzca un numero entero:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("\nEl numero es par");
    }
    else printf("\nEl numero es impar");
    return 0;
}
