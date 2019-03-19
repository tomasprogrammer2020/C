#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  char caracter;
      char palabra[15]; //indico cual es la cantidad maxima de caracteres de la palabra
     printf("Ingrese una palabra: ");
     scanf("%s", palabra);
     printf("La palabra ingresada es: %s", palabra);*/

    /*int i = 0;
    while(i<10)
    {
        printf("%d ", i+1);
        i++;
    }
    printf("\nEste es el valor de i: %d", i);*/
    /*int i;
    for(i=0; i<=10; i++)
    {
        if(i==5)
        {
            continue;//esto hace que saltee todo el codigo restante de la iteracion
        }
        printf("%d", i);
    }*/
    int numero;
    int contadornumeros = 0;
    int acumulador = 0;
    int contadorpares = 0;
    float promedionegativos;
    int maximo;
    int minimo;
    int sumapositivos;
    int acumpositivo=0;
    int acumnegativo=0;
    int minimopositivo;
    int maximonegativo;
    int contadorentre; //entre -10 y 50
    float promediototal;
    int contnegativo=0;
    char seguir;
    int flag = 0;

   do{ printf("Ingrese un numero: ");
    scanf("%d", numero);
    if(numero < minimo || flag == 0){
        minimo = numero;
    }
    if(numero > maximo || flag == 0){
        maximo = numero;
        flag = 1;
    }



   printf("Desea continuar? ");
   scanf("%c", seguir);

   }while(seguir==s);
    return 0;
}
