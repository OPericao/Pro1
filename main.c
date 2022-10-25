#include <stdio.h>
#include <string.h>

int main()
{
    char *a,*b;
    strcpy(a,a);
    strcpy(b,b);
    printf("\n%d",strcmp(b,a));
    return 0;
}
