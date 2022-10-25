#include <stdio.h>

int main()
{
    int b,h;
    char c;
    printf("Introduce el caracter deseado:");
    scanf("%c",&c);
    printf("Introduzca la base del triangulo y su altura:");
    scanf("%d %d",&b,&h);
    for(int i=0;i<h;i++)
    {
        printf("%c ",c);
        for(int i=0;i<b;i++)
        {
            printf("\n");
        }

    }

    return 0;
}
