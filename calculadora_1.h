#include <stdio.h>
#include <stdlib.h>

void calculadora()
{
    int num1 = 0, num2 = 0, suma = 0, resta = 0, multiplicacion = 0;
    float division = 0.0;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingresa el otro numero: ");
    scanf("%d", &num2);

    printf("La suma de ambos numeros es %d \n", suma = num1 + num2);
    printf("La resta de ambos numeros es %d \n", resta = num1 - num2);
    printf("La multiplicacion de ambos numeros es %d \n", multiplicacion = num1 * num2);
    printf("La division de ambos numeros es %f \n", division = num1 / num2);

    
}