#include <stdio.h>

int main()
{
    int num;
    printf("Introduzca un numero:");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("\nEl numero es positivo");
    }
    else printf("\nEl numero es negativo");
    return 0;
}
