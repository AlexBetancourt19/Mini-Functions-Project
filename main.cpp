#include <iostream>
#include <calculadora_1.h>

using namespace std;



void showMenu(){
    system("pause>0");
    cout << "********MENU********" << endl;
    cout << "1.  Calculadora" << endl;
    cout << "2.  Numeros Pares/Impares" << endl;
    cout << "3.  Conversor de Medidas " << endl;
    cout << "4.  Numero/Palabra es palindroma" << endl;
    cout << "5.  Conversor de numeros a romanos" << endl;
    cout << "6.  Conversor de numeros a letras" << endl;
    cout << "7.  Conversión de números enteros con decimal a letras" << endl;
    cout << "8.  Tabla de multiplicar" << endl;
    cout << "9.  Todas las Tablas de multiplicar" << endl;
    cout << "10. Multiplicacion manual" << endl;
    cout << "11. Conversión de números decimales a binario" << endl;
    cout << "12. Conversión de números decimales a hexadecimales" << endl;
    cout << "13. Crear Figuras Geométricas Básicas." << endl;
    cout << "14. Mover un punto en toda la pantalla" << endl;
    cout << "15. Simular un Cajero Automático (Autómata)" << endl;
    cout << "16. Calcular la Hipotenusa" << endl;
    cout << "********************" << endl;

}

int main()
{    
    int option;

    do{
    showMenu();
    cout << "Option; ";
    cin >> option;
    system("cls");

    switch(option){
    case 1: calculadora(); break;
    case 2: break;
    case 3: break;
    }
    } while (option != 4);
    
    
    system("pause>0");
}