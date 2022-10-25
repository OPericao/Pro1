#include <stdio.h>
#include <stdbool.h>
#define orden 3

void modificarMatriz(int matriz[orden][orden])
{
    int fila,columna,valor,i,j;
    printf("\nIndique en que fila y columna quiere modificar un valor");
    printf("\nFila:");
    scanf("%d",&fila);
    printf("\nColumna:");
    scanf("%d",&columna);
    printf("\nIntroduzca el nuevo valor:");
    scanf("%d",&valor);
    printf("\n");
    matriz[fila-1][columna-1]=valor;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}

void mostrarDatos(int matriz[orden][orden])
{
    int i,j,positivos=0,multDos=0,multTres=0;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(matriz[i][j]>=0 && j % 2 ==0)
            {
                positivos++;
                if(matriz[i][j] % 2 == 0)
                {
                    multDos++;
                }
                if(matriz[i][j] % 3 == 0)
                {
                    multTres++;
                }
            }
        }
    }
    printf("\nHai %d numeros positivos",positivos);
    printf("\nHai %d multiplos de 2",multDos);
    printf("\nHai %d multiplos de 3",multTres);
}

int main()
{
    int matriz[orden][orden]={0};
    char opcion;
    bool seguir=true;
    printf("Introduzca la letra que corresponde a la funcion que quiere realizar (en minusculas)\n");
    printf("a.Modificar contenido de la matriz\nb.Mostrar resultados\nc.Salir del programa");
    do{
        do {
            printf("\nOpcion?:");
            scanf(" %c",&opcion);
        }while (opcion!='a'&& opcion!='b' && opcion!='c');

        switch (opcion)
        {
            case 'a':
                modificarMatriz(matriz);
                seguir=true;
                break;
            case 'b':
                mostrarDatos(matriz);
                seguir=false;
                break;
            case 'c':seguir=false;
                break;
            default:
                printf("\nAlgo ha fallado, asegurese de introducir bien los datos\n");
                break;

        }
    }while (seguir==true);
}

