// 2.30.cpp : Calculadora del indice de masa corporal
//

#include <iostream>
using namespace std;

int main()
{
    // NOTA: SE USA DOUBLE PARA EL BUEN FUNCIONAMIENTO DE LA CALCULADORA, YA QUE CON INT NO ERA PRECISO EL RESULTADO
    double peso = 0; // valor de peso  
    double altura = 0; //valor de altura
    
    cout << "Escriba su peso en kilogramos: "; // al usar double se puede ingresar con puntos decimales
    cin >> peso;

    cout << "Escriba su altura en metros: "; // al usar double se puede ingresar con puntos decimales
    cin >> altura;

    double imasac = peso / (altura * altura); // operación para sacar el indice de masa corporal

    cout << "Su indice de masa corporal es: " << imasac << endl;  // se muestra resultado en pantalla
    cout << endl;

    cout << "VALORES DE BMI"<<endl;                 // se muestran valores de referencia 
    cout << "Bajo peso: menos de 18.5"<<endl;
    cout << "Normal: entre 18.5 y 24.9"<<endl;
    cout << "Sobrepeso: entre 25 y 29.9"<<endl;
    cout << "Obeso: 10 o mas" << endl;
    }
