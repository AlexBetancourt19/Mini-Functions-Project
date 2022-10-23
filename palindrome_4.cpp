#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra o numero a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra/numero ingresada es palindromo!! " << endl;
    } else {
        cout << "La palabra/numero ingresada no es palindromo!! F en el chat" << endl;
    }
    
    return 0;
}