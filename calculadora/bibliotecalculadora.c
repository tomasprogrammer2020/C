#include "bibliotecalculadora.h"
#include <stdio.h>
#include <stdlib.h>

float pedirEntero(char texto[])
{
    float unNumero;
    printf("%s", texto);
    scanf("%f", &unNumero);
    return unNumero;
}
