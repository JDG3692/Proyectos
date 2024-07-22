// 2.23.cpp : Enteros mayor y menor
//

#include <iostream>
using namespace std;

int main()
{
    //declaracion de variables
    int numero1 = 0; //primer valor ingresado
    int numero2 = 0; //segundo valor ingresado
    int numero3 = 0; //tercer valor ingresado
    int numero4 = 0; //cuarto valor ingresado
    int numero5 = 0; //quinto valor ingresado

    cout << "Escribir 5 numeros enteros ";
    cin >> numero1 >> numero2 >> numero3 >>numero4 >> numero5;

    int mayor{}; // se crea mayor

    mayor = numero1; // se establece numero 1 como mayor 

    if (mayor < numero2) mayor = numero2; // se compara mayor con numero 2 y de ser menor se actualiza mayor a numero 2

    if (mayor < numero3) mayor = numero3; // se compara mayor con numero 3 y de ser menor se actualiza mayor a numero 3

    if (mayor < numero4) mayor = numero4; // se compara mayor con numero 4 y de ser menor se actualiza mayor a numero 4

    if (mayor < numero5) mayor = numero5; // se compara mayor con numero 5 y de ser menor se actualiza mayor a numero 5

    cout << "El numero mayor es " << mayor << endl; // se muestra en pantalla mayor

    int menor{}; //se crea menor

    menor = numero1; // se establece numero 1 como menor

    if (menor > numero2) menor = numero2; // se compara menor con numero 2 y de ser mayor se actualiza menor a numero 2

    if (menor > numero3) menor = numero3; // se compara menor con numero 3 y de ser mayor se actualiza menor a numero 3

    if (menor > numero4) menor = numero4; // se compara menor con numero 4 y de ser mayor se actualiza menor a numero 4

    if (menor > numero5) menor = numero5; // se compara menor con numero 5 y de ser mayor se actualiza menor a numero 5

    cout << "El numero menor es " << menor << endl; // se muestra en pantalla mayor

}

