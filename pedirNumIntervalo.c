#include <stdio.h>
/* Pedir valores enteros como extremos de un intervalo
 * Pedir un numero dentro del intervalo
 */

int numero(int min,int max);
void extremosIntervalo(int *min,int *max);

int main()
{
    int n,minimo,maximo;
    extremosIntervalo (&minimo,&maximo);
    n=numero(minimo,maximo);

    printf("El numero %d esta en el intervalo [%d, %d]\n",n,minimo,maximo);
    return 0;
}

int numero(int min,int max)
{
    int n;
    do {
        printf("Introduce un numero del intervalo:");
        scanf("%d",&n);
    }while (n<min || n>max);
    return n;
}

void extremosIntervalo(int *min,int *max)
{
    do
    {
        printf("\nIntroduzca el minimo del intervalo:");
        scanf("%d",min);
        printf("\nIntroduzca el maximo del intervalo:");
        scanf("%d",max);
    }while (*min>*max || *min==*max);
}
