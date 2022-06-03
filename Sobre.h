#include <iostream>
#include "Envio.h"
using namespace std;
//Envio(string, string, string, string, int, int, double);
//Envio(string _nombreR, string _direccionR, string _nombreD, string _direccionD, int _CP_Remitente, int _CP_Destinatario, double _costoEstandar)
class Sobre : public Envio{
    private:
        double largo, ancho, cargoAdicional;
    public:
        Sobre();
        Sobre(string, string, string, string, int, int , double, double, double, double);
        void mostrarDatos();
        double calcularCosto();
};
Sobre::Sobre(){
    nombreR = "xxx";
    direccionR = "xxx";
    nombreD = "xxx";
    direccionD = "xxx";
    CP_Remitente = 00000;
    CP_Destinatario = 11111;
    costoEstandar = 500.00;
    largo = 0.00;
    ancho = 0.00;
    cargoAdicional = 10.00;
}
Sobre::Sobre(string _nombreR, string _direccionR, string _nombreD, string _direccionD, int _CP_Remitente, int _CP_Destinatario, double _costoEstandar, double _largo, double _ancho, double _cargoAdicional){
    nombreR = _nombreR;
    direccionR = _direccionR;
    nombreD = _nombreD;
    direccionD = _direccionD;
    CP_Remitente = _CP_Remitente;
    CP_Destinatario = _CP_Destinatario;
    costoEstandar = _costoEstandar;
    largo = _largo;
    ancho = _ancho;
    cargoAdicional = _cargoAdicional;
}
double Sobre::calcularCosto(){
    double area;
    area = largo * ancho;
    if(area > (25*30)){
        return costoEstandar + cargoAdicional;
    }
    else{
        return costoEstandar;
    }
}
void Sobre::mostrarDatos(){
    cout<<"SOBRE"<<endl;
    double costoFinal = calcularCosto();
    Envio::mostrarDatos();
    cout<< "Dimension del sobre: " << endl;
    cout<< largo << "cm X" << ancho << "cm" << endl;
    cout<<"Por: "<<costoFinal << " pesos" << endl;

}
