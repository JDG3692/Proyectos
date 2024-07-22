// 2.31.cpp : Calculadora e ahorro por viajes compartidos en automovil
//

#include <iostream>
using namespace std;

int main()
{
    //variables
    double kmxdia;       // total de kilometros conducidos por dia
    double costolitro;   // costo por litro de gasolina
    double kmlitro;      // promedio kilometros por litro
    double cuotasest;    // cuotas de estacionamiento por dia
    double cuotaspe;     // peaje por dia

    // entrada de informacion por parte del usuario
    cout << "Ingrese el total de kilometros conducidos por dia: ";
    cin >> kmxdia;

    cout << "Ingrese el costo por litro de gasolina: ";
    cin >> costolitro;

    cout << "Ingrese el promedio de kilometros por litro: ";
    cin >> kmlitro;

    cout << "Ingrese las cuotas de estacionamiento por dia: ";
    cin >> cuotasest;

    cout << "Ingrese el costo del peaje por dia: ";
    cin >> cuotaspe;

    //calculo del costo diario de la gasolina
    double litrosusados = kmxdia / kmlitro; // se divide el total de kilometros conducidos por día sobre el promedio de kilometros por litro para tener los litros usados
    double costogasolina = litrosusados * costolitro; // se multiplican los litros usados por el costo por litro de gasolina para tener el costo de la gasolina

    //calcular costo total diario
    double costototaldiario = costogasolina + cuotasest + cuotaspe; // se suma el costo de la gasolina con las cuotas de estacionamiento por dia y las cuotas del peajle por dia para obtener el costo total diario

    cout << "El costo por dia para conducir al trabajo es: $" << costototaldiario << endl;

    return 0;
}

