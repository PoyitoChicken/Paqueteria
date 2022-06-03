#include <iostream>
using namespace std;

#ifndef ENVIO_H
#define ENVIO_H


class Envio {
    protected:
        string nombreR, direccionR, ciudadR, estadoR, nombreD, direccionD, ciudadD, estadoD;
        int CP_Remitente, CP_Destinatario;
        double costoEstandar = 500;
    public:
        Envio();
        Envio(string, string, string, string, int, int, double);
        double calcularCosto();
        virtual void mostrarDatos();
};
Envio::Envio(){
    nombreR = "xxx";
    direccionR = "xxx";
    ciudadR = "Monterrey";
    estadoR = "Nuevo León";
    CP_Remitente = 00000;
    CP_Destinatario = 11111;
    costoEstandar = 500;
}
Envio::Envio(string _nombreR, string _direccionR, string _nombreD, string _direccionD, int _CP_Remitente, int _CP_Destinatario, double _costoEstandar){
    nombreR = _nombreR;
    direccionR = _direccionR;
    nombreD = _nombreD;
    direccionD = _direccionD;
    CP_Remitente = _CP_Remitente;
    CP_Destinatario = _CP_Destinatario;
    costoEstandar = _costoEstandar;
}


double Envio::calcularCosto(){
    return costoEstandar;
}
void Envio::mostrarDatos(){
    cout <<"Remitente"<< endl;
    cout << "Nombre: " << nombreR <<"Direccion: " << direccionR << ", CP: " << CP_Remitente << endl;
    cout <<"Destinatario" << endl;
    cout << "Nombre: " << nombreD <<"Direccion: " << direccionD << ", CP: " << CP_Destinatario << endl;
}
#endif // ENVIO_H
