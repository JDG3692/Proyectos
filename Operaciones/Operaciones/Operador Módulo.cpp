// Usar operador modulo
//

#include <iostream>

int main()
{
    int numero1=0; //Ingresar numero dividiendo
    int numero2=0; //Ingresar numero divisor 
    int division = 0; //division de numero 1 y 2

    std::cout << "Escribir primer numero "; //pide datos al usuario
    std::cin >> numero1;//lee el primer numero 

    std::cout << "Escribir segundo numero "; //pide datos al usuario
    std::cin >> numero2;//lee el primer numero

    division = numero1 % numero2; //divide los números

    std::cout << "La resto de la division es " << division << std::endl;// muestra resto de division
}

