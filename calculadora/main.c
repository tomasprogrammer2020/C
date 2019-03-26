#include <stdio.h>
#include <stdlib.h>
#include "bibliotecalculadora.h"


int main()
{
    int opcion;
    float numeroUno;
    float numeroDos;
    char seguir = 's';
    do
    {
        printf("1. Ingresar primer operando\n2. Ingresar segundo numero\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numeroUno = pedirNumero("Ingrese el primer operando: ");
            break;
        case 2:
            numeroDos = pedirNumero("Ingrese el segundo operando: ");
            break;
        case 3:

            break;
        case 4:

            seguir = 'n';
            break;

        }
        system("pause");
        system("cls");
    }
    while(seguir=='s');
}
