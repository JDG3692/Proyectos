// 2.28.cpp : Digitos Separados
//

#include <iostream>
using namespace std;

int main()
{
    int numero = 0;

    cout << "Escriba un numero de 5 digitos: "; //se escribe numero de 5 digitos
    cin >> numero;

    // se extraen y se almacenanan los digitos
    int digito1 = numero / 10000;       //digito1         
    int digito2 = (numero / 1000) % 10; //digito2
    int digito3 = (numero / 100) % 10;  //digito3
    int digito4 = (numero / 10) % 10;   //digito4
    int digito5 = numero % 10;          //digito5

    // se imprimen los digitos separados
    cout << "Digitos separados: ";
    cout << digito1 << " ";
    cout << digito2 << " ";
    cout << digito3 << " ";
    cout << digito4 << " ";
    cout << digito5 << " ";

}

