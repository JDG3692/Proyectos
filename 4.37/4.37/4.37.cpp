// 4.37.cpp : Crecimiento de la Poblacion Mundial
//

#include <iostream>
using namespace std;

int main()
{
    // Variables iniciales
    double PoblacionMundialInicial = 8000000000; // Poblacion mundial actual
    double TasaCrecimiento = 0.91 / 100; // Tasa de crecimiento anual del 0.91%
    double PoblacionActualizada = PoblacionMundialInicial;
    double DoblePoblacion = PoblacionMundialInicial * 2;
    int Contador = 1; // Contador de años
    int Doble = -1;  // Año doble poblacion

    // Creacion de tabla
    std::cout << "Año\tPoblacion\t\tIncremento" << std::endl;

    // Calcula la poblacion anual hasta que contador llegue a 75
    while (Contador <= 75)
    {
        double IncrementoPoblacion = PoblacionActualizada * TasaCrecimiento;
        PoblacionActualizada += IncrementoPoblacion;

        // Muestra la informacion de cada año
        cout << Contador << "\t" << static_cast<long long>(PoblacionActualizada) << "\t\t" << static_cast<long long>(IncrementoPoblacion) << endl;

        // Verifica si se ha duplicado la poblacion
        if (DoblePoblacion == -1 && PoblacionActualizada >= DoblePoblacion)
        {
            DoblePoblacion = Contador;
        }

        // Incrementa contador de año
        Contador++;
    }

    // Muestra el año en que la población se duplica
    if (Doble != -1)
    {
        cout << "El tamaño de la población se duplicara en el año " << Doble << "." << endl;
    }
    else
    {
        cout << "La poblacion no se duplicara en los proximos 75 años con la tasa de crecimiento actual." << endl;
    }

    return 0;








}
