// Comparacion de enteros medinate instrucciones if, operadores
//relacionales y operadores de igualdad

#include <iostream>

using std::cout; //el programa usa cout
using std::cin; //el programa usa cin
using std::endl; //el programa usa endl

//la funcion main empieza la ejecucion del programa
int main()
{
    int numero1 = 0; //primer entero a comparar (se inicializa con 0)
    int numero2 = 0; //segundo entero a comparar (se inicializa con 0)
    
    cout << "Escriba dos enteros a comparar: ";// pide datos al usuario
    cin >> numero1 >> numero2;//lee dos enteros del usuario

    if (numero1 == numero2)
        cout << numero1 << " == " << numero2 << endl;

    if (numero1 != numero2)
        cout << numero1 << " != " << numero2 << endl;

    if (numero1 < numero2)
        cout << numero1 << " < " << numero2 << endl;

    if (numero1 > numero2)
        cout << numero1 << " > " << numero2 << endl;

    if (numero1 <= numero2)
        cout << numero1 << " <= " << numero2 << endl;

    if (numero1 >= numero2)
        cout << numero1 << " >= " << numero2 << endl;
}// fin de la funcion main

