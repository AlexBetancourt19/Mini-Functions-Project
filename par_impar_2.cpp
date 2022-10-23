#include <iostream>
#include <cstdlib>

using namespace std;

int numero;

int main(){

cin >> numero;
div_t resultado;
resultado=div(numero,2);

if (resultado.rem>0)
{
cout << numero << " es impar" << endl;
}
else {
    cout << numero << " es par" << endl;
}
cin.get();

    return 0;
}