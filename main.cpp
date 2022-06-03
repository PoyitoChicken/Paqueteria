/*
Jorge Cooley Magallanes A00833271
Oscar Cortés A00825972
*/
#include <iostream>
#include "Paquete.h"
#include "Sobre.h"

using namespace std;
//Paquete(double _costoEstandar, double _largo, double _ancho, double _profundidad, double _peso, double _costoPorKg){
//Sobre(double _costoEstandar, double _largo, double _ancho, double _cargoAdicional){

int main()
{
    Envio *vector[1];
    vector[0] = new Paquete("Juan", "Calle falsa 123", "Walter", "Calle Arroyo Lane 308, Albuquerque Nuevo Mexico", 10301, 10501, 500.00, 30.00, 15.00, 15.00, 2.5, 30);
    vector[1] = new Paquete("Jorge", "Calle falsa 124", "Barto", "Calle Siempre Viva 742, Springfield", 10601, 11311, 500.00, 31.00, 14.00, 16.00, 4, 30);
    vector[2] = new Paquete("Roberto", "Calle falsa 125", "Sherman", "Calle Wallaby 42, Springfield", 11411, 12421, 500.00, 32.00, 13.00, 14.00, 5, 30);
    vector[3] = new Sobre("Juan", "Calle falsa 123", "Walter", "Calle Arroyo Lane 308, Albuquerque Nuevo Mexico", 12721, 12821, 500.00, 33.00, 12.00, 40);
    vector[4] = new Sobre("Jorge", "Calle falsa 124", "Barto", "Calle Siempre Viva 742, Springfield", 13331, 13831, 500.00, 54.00, 11.00, 40);
    for (int i = 0; i<=4; i++){
        cout << i+1 << endl;
        vector[i] -> mostrarDatos();
        cout << "\n_______________________________\n";
    }
    cout<< "AAAAAA" << endl;
    return 0;
}
