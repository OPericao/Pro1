#include <stdio.h>

int main()
{
    int a11,a12,a21,a22,b11,b12,b21,b22,c11,c12,c21,c22;
    printf("Introduzca los valores de la matriz 1:");
    scanf("%d %d %d %d", &a11,&a12,&a21,&a22);
    printf("Introduzca los valores de la matriz 2:");
    scanf("%d %d %d %d", &b11,&b12,&b21,&b22);
    c11=(a11*b11)+(a12*b21);
    c12=(a11*b12)+(a12*b22);
    c21=(a21*b11)+(a22*b21);
    c22=(a21*b12)+(a22*b22);
    printf("\n%d %d\n%d %d",a11,a12,a21,a22);
    printf("\n *");
    printf("\n%d %d\n%d %d",b11,b12,b21,b22);
    printf("\n =");
    printf("\n%d %d\n%d %d",c11,c12,c21,c22);
    return 0;
}