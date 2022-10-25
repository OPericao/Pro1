#include <stdio.h>

int diaSemana();
void imprimirDia();

int main()
{
    imprimirDia(diaSemana());
}

int diaSemana()
{
    char inicial,*dia;
    do
    {
        printf("Introduzca la inicial del dia de la semana (miercoles sera la letra X por motivos de repeticion):");
        scanf("%c",&inicial);
    }while(inicial!='L' && inicial!='M' && inicial!='X' && inicial!='J' &&
    inicial!='V' && inicial!='S' && inicial!='D');
    switch(inicial) {
        case 'L':
            dia="Lunes";
            break;
        case 'M':
            dia="Martes";
            break;
        case 'X':
            dia="Miercoles";
            break;
        case 'J':
            dia="Jueves";
            break;
        case 'V':
            dia="Viernes";
            break;
        case 'S':
            dia="Sabado";
            break;
        case 'D':
            dia="Domingo";
            break;
    }
    return dia;
}

void imprimirDia(dia)
{
    printf("%s",dia);
}
