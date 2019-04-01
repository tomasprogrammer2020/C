#include <stdio.h>
#include <stdlib.h>
#include "Untitled2.h"
#define T 5

int main()
{
 int numeros[T];
 int maximo;
 int posicion;
 //int i;

 cargarVector(numeros, T);
 mostrarVector(numeros, T);
 maximo = buscarMaximo(numeros, T);
 printf("El numero maximo es: %d", maximo);
 posicion = buscarValor(numeros, T, posicion);
 printf("El valor esta en la posicion: %d", posicion);

 return 0;
}


