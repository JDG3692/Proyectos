// 2.25.cpp : Multiplos
//

#include <iostream>
using namespace std;

int main()
{
    int numero1 = 0; //primer numero ingresado
    int numero2 = 0; //segundo numero ingresado


    cout << "Escriba dos numeros enteros "; // se ingresan los dos números enteros por parte del usuario
    cin >> numero1 >> numero2;

    if (numero1 % numero2 == 0) { // se realiza la operación de division entre en numero 1 y el numero 2

        cout << "El primer numero si es multiplo del segundo "; // si el resultado es cero, se muestra en pantalla que si es multiplo del segundo numero

    }

    if (numero1 % numero2 != 0) { // se realiza la operación de division entre en numero 1 y el numero 2


        cout << "El primer numero no es multiplo del segundo " << endl; // si el resultado no es cero, se muestra en pantalla que no es multiplo del segundo numero
    }
   
}

