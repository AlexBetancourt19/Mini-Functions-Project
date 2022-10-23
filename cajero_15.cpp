#include <iostream>
using namespace std;

void showMenu(){
    cout << "********MENU********" << endl;
    cout << "1. Revisar Cuenta" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Salir" << endl;
    cout << "********************" << endl;

}

int main()
{
    //Revisar balance, depositar, retirar, salida
    int option;
    double balance = 500;
    
    do{
    showMenu();
    cout << "Option; ";
    cin >> option;
    system("cls");

    switch(option){
    case 1: cout << "Su balance es de: " << balance << "$" << endl; break;
    case 2: cout << "Depositar Cantidad: ";
        double depositAmmount;
        cin >> depositAmmount;
        balance += depositAmmount;
        break;
    case 3: cout << "Retirar Cantidad: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if(withdrawAmount <= balance)
            balance -= depositAmmount;
        else
            cout << "Lo sentimos, no hay suficientes fondos " << endl;
        break;
    }
    } while (option != 4);
    
    
    system("pause>0");
}