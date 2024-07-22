// 2.19.cpp : Aritmética, menor y mayor.
//

#include <iostream>
using namespace std; 

int main()
{
    //declaracion de variables
    int numero1 = 0; //primer valor ingresado
    int numero2 = 0; //segundo valor ingresado
    int numero3 = 0; //tercer valor ingresado

    cout << "Escribir 3 numeros enteros ";
    cin >> numero1 >> numero2 >> numero3;

    cout << "La suma es " << numero1 + numero2 + numero3 << endl; // se suman los 3 numeros y se muestra en pantalla

    cout << "El promedio es " << (numero1 + numero2 + numero3) / 3 << endl; // se saca el promedio sumando los 3 numeros y dividiendo entre 3 y se muestra en pantalla

    cout << "El producto es " << numero1 * numero2 * numero3 << endl; // se saca el producto multiplicando los 3 numeros y se muestra en pantalla

    int menor{}; // se crea menor

    menor = numero1; // se establece el numero 1 como menor

    if (menor > numero2) menor = numero2; // se compara el numero menor con el numero 2 en caso de ser mayor se actualiza menor a numero 2

    if (menor > numero3) menor = numero3; // se compara el numero menor con el numero 3 en caso de ser mayor se actualiza mayor a numero 3
        
    cout << "El menor es " << menor << endl; // se muestra en pantalla el numero menor 

    int mayor{}; // se crea mayor

    mayor = numero1; // se establece el numero 1 como mayor

    if (mayor < numero2) mayor = numero2; // se compara el numero mayor con el numero 2 en caso de ser menor se actualiza mayor a numero 2

    if (mayor < numero3) mayor = numero3; // se compara el numero mayor con el numero 3 en caso de ser menor se actualiza mayor a numero 3

    cout << "El mayor es " << mayor << endl; // se muestra en pantalla el numero mayor

   }

