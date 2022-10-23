#include <stdio.h>  
#include <stdlib.h>  
#include <conio.h>  

float mts, cmts;  
int opc;  

main(){  

printf("Que desea convertir\n");  
printf("1. Metros a kilometros\n2. Centimetrso a milimetros\n");  
scanf("%d", &opc);

switch (opc){  
    case 1:  
        system("CLS");  
        printf("Escriba la cantidad de metros a convertir\n");  
        scanf("%f", &mts);  
        printf("%.f metros equivale a %.2f kilometros", mts, (mts/1000));  
        break;  

    case 2:  
        system("CLS");  
        printf("Escriba la cantidad de centimetros a convertir\n");  
        scanf("%f", &cmts);  
        printf("%.f centimetros equivale a %.2f milimetros", cmts, (cmts*10));  
        break;

    default:  
        system("CLS");  
        printf("Opcion invalida");  
        break;  
}  

getch();  

return 0;  

}