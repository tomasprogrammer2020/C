#include <stdio.h>
#include <stdlib.h>
#include "Untitled2.h"
void cargarVector(int numeros[], int tam)
{
    int i;

       for(i=0; i<tam; i++)
    {
     printf("Ingrese numero: ");
     scanf("%d", &numeros[i]);
    }
}
void mostrarVector(int numeros[], int tam)
{
  int i;

       for(i=0; i<tam; i++)
    {
     printf("%d\n", numeros[i]);
}
}
int buscarMaximo(int numeros[], int tam)
{
int flag = 0;
int numeroMaximo;
int i;
for(i=0;i<tam;i++){
if(numeros[i] > numeroMaximo|| flag == 0){
     numeroMaximo = numeros[i];
    flag = 1;
}
}
return numeroMaximo;
}
int buscarValor(int numero[], int tam, int valor)
{
int i;
printf("\nIngrese un valor: ");
scanf("%d", &valor);
for(i=0; i<tam; i++){
    if(valor == numero[i]){
         valor= i +1;
    }
}
return valor;
}















