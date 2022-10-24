#include <iostream>

using namespace std;

int main(){
    int decimal;
    short binary[8];

    cout << "Type a number"  << endl;
    cin >> decimal;

    for (int i = 0; i < 8; i++)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
    }
    cout << "Your number in binary is: " << endl;
    for (int i = 7; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
}