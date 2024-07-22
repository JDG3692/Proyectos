// 4.13.cpp : Kilometraje de Gasolina
//

#include <iostream>
using namespace std;

int main() {
    // Inicializar variables
    float kmConducidos = 0;
    float litrosUsados = 0;
    float totalKilometros = 0;
    float totalLitros = 0;

    // Ingresar los datos
    cout << "Ingresa los kilometros conducidos (-1 para terminar): ";
    cin >> kmConducidos;

    // Se revisa la condicion que Kilometros conducidos sea mayor o igual que 0
    while (kmConducidos >= 0) 
    {
        cout << "Ingresa los litros usados: ";
        cin >> litrosUsados;
        
        // Se actualizan los totales acumulando kilometros y litros ingresados
        totalKilometros += kmConducidos;
        totalLitros += litrosUsados;

        // Se calcula el promedio de kilometros por litro
        float KPL = totalKilometros / totalLitros;

        // Se muestra el KPL calculado para el registro actual y el total acumulado
        cout << "KPL en este reabastecimiento: " << KPL;

        cout << "\n" << "Total KPL: " << KPL << endl;

        cout << "\n";

        //Se ingresan nuevamente los datos para el siguiente registro, se continua solo si los datos son mayor e igual a 0
        cout << "Ingresa los kilometros conducidos (-1 para terminar): ";
        cin >> kmConducidos;
    }

    cout << endl;

    return 0;
}