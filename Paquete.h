#include <iostream>
#include "Envio.h"
using namespace std;
//Envio(string, string, string, string, int, int, double);
//Envio(string _nombreR, string _direccionR, string _nombreD, string _direccionD, int _CP_Remitente, int _CP_Destinatario, double _costoEstandar)
class Paquete : public Envio{
    private:
        double largo, ancho, profundidad, peso, costoPorKg;
    public:
        Paquete();
        Paquete(string, string, string, string, int, int, double, double, double, double, double, double);
        void mostrarDatos();
        double calcularCosto();
};


Paquete::Paquete(){
    nombreR = "xxx";
    direccionR = "xxx";
    nombreD = "xxx";
    direccionD = "xxx";
    CP_Remitente = 00000;
    CP_Destinatario = 11111;
    costoEstandar = 500.00;
    largo = 30.00;
    ancho = 15.00;
    profundidad = 15.00;
    peso = 2.5;
    costoPorKg = 30;
}
Paquete::Paquete(string _nombreR, string _direccionR, string _nombreD, string _direccionD, int _CP_Remitente, int _CP_Destinatario, double _costoEstandar, double _largo, double _ancho, double _profundidad, double _peso, double _costoPorKg){
    nombreR = _nombreR;
    direccionR = _direccionR;
    nombreD = _nombreD;
    direccionD = _direccionD;
    CP_Remitente = _CP_Remitente;
    CP_Destinatario = _CP_Destinatario;
    costoEstandar = _costoEstandar;
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoPorKg = _costoPorKg;
}

double Paquete::calcularCosto(){
    return costoEstandar + (costoPorKg* peso);
}
void Paquete::mostrarDatos(){
        double costoFinal = calcularCosto();
        Envio::mostrarDatos();
        cout<<"PAQUETE"<<endl;
        cout<< "Dimension del paquete: " << endl;
        cout<< largo << "cm X" << ancho << "cm X" << profundidad << "cm" << endl;
        cout<<"Por: "<<costoFinal << " pesos" << endl;


}

