#ifndef CIVILIZACION_H_INCLUDED
#define CIVILIZACION_H_INCLUDED
#include <iostream>
#include <iomanip>

#include "aldeanos.h"
#include <list>

using namespace std;

class Civilizacion
{
private:
    //Civilizacion de civilizaciones
    string nombre;
    double ubicacionx;
    double ubicaciony;
    float puntuacion;

    //Civilizacion de aldeanos
    string nombredeAldeano;
    list<Aldeano> aldeanos;

public:
    Civilizacion();
    Civilizacion(
        const string &Nombre,
        double ubicacionx,
        double ublicaciony,
        float puntuacion);

    Civilizacion(const string &nombredeAldeano):nombredeAldeano(nombredeAldeano){}

    void setNombredeAldeano(const string &nombredeAldeano);
    string getNombredeAldeano();

    void agregarFinal(const Aldeano &a);
    void agregarInicio(const Aldeano &a);
    void print();
    void eliminarNombredeAldeano(const string &nombredeAldeano);
    void eliminarEdad();
    void eliminarSalud(size_t salud);
    void ordenarNombredeAldeano();
    void ordenarEdad();
    void ordenarSalud();
    void respaldar_aldeanos();
    void recuperar_aldeanos();
    Aldeano* modificarNombredeAldeano(Aldeano &a);
    Aldeano* modificarEdad(Aldeano &a);
    Aldeano* modificarGenero(Aldeano &a);
    Aldeano* modificarSalud(Aldeano &a);
    Aldeano* buscarAldeano(const Aldeano &a);

    void setNombre(const string &v);
    string getNombre();

    void setUbicacionx(double v);
    double getUbicacionx();

    void setUbicaciony(double v);
    double getUblicaciony();

    void setPuntuacion(float v);
    float getPuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
    out << left;
    out << setw(30) << c.nombre;
    out << setw(20) <<c.ubicacionx;
    out << setw(20) <<c.ubicaciony;
    out << setw(20) <<c.puntuacion;
    out << endl;

    return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c)
    {

    cout <<"Nombre: ";
    getline(cin, c.nombre);

    cout <<"Ublicacion en X: ";
    cin>>c.ubicacionx;

    cout <<"Ubicacion en Y: ";
    cin>>c.ubicaciony;

    cout <<"Puntuación: ";
    cin>>c.puntuacion;


    return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }

    friend Civilizacion& operator <<(Civilizacion &l, const Aldeano &a)
    {
        l.agregarFinal(a);
        l.agregarInicio(a);

        return l;
    }


};


#endif // COMPUTADORA_H_INCLUDED
