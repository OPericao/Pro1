#include <stdio.h>

int main()
{
    int n1,n2,n3;

    printf("Introduzca los 3 numeros:");
    scanf("%d %d %d",&n1,&n2,&n3);
    do if (n1==n2||n1==n3||n2==n3)
    {
        printf("Los numeros no pueden ser iguales, introduzca otros valores\n");
        scanf("%d %d %d",&n1,&n2,&n3);
    } while (n1==n2||n1==n3||n2==n3);
    if(n1>n2&&n2>n3)
    {
        printf("%d %d %d", n1, n2, n3);
    }
    if(n2>n1&&n1>n3)
    {
        printf("%d %d %d",n2,n1,n3);
    }
    if(n3>n2&&n2>n1)
    {
        printf("%d %d %d",n3,n2,n1);
    }
    if(n1>n3&&n3>n2)
    {
        printf("%d %d %d",n1,n3,n2);
    }
    if(n2>n3&&n3>n1)
    {
        printf("%d %d %d",n2,n3,n1);
    }
    if (n3>n1&&n1>n2)
    {
        printf("%d %d %d",n3,n1,n2);
    }
    return 0;
}
