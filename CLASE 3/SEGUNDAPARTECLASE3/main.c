#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);
int sacarPromedio(void);
int aprobarMateria(int notaMinima, int nota);
void ejercicioUno(void);
int main()
{
    void ejercicioUno(void);


    return 0;
}
/*int pedirNota()
{
    int nota;
    do
    {

        printf("Ingrese una nota: ");
        scanf("%d", &nota);

    }
    while(!(nota >= 0 && nota <= 10));
    printf("La nota ingresada es: %d", nota);


    return nota;
}

/*float sacarPromedio(int suma, int cantidad)
{
 float promedio;
 suma = 15, cantidad = 2;
promedio = (float)suma/cantidad;
return promedio;*/


/*int aprobarMateria(int notaMinima, int nota)
{
    ìf(nota >= notaMinima)
    return=1;
    return=0;
}*/
void ejercicioUno(){

int contadorAprobados=0;
int acumNotas=0;
int promedio;
int nota;
int i;
for(i=0;i>5;i++){

if(nota>=6){
    contadorAprobados++;
}



acumNotas+= nota;
}
promedio = acumNotas/5;

printf("%d, %d, %d", acumNotas, contadorAprobados, promedio);
return 0;
}
