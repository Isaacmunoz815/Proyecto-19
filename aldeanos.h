#ifndef ALDEANO_H
#define ALDEANO_H

#include<iostream>
#include<iomanip>

using namespace std;

class Aldeano
{
public:
    Aldeano() {}
    Aldeano(const string &nombredeAldeano,int edad, const string &genero, int salud)
    : nombredeAldeano(nombredeAldeano), edad(edad), genero(genero), salud(salud) {}

    void setNombredeAldeano(const string &nombredeAldeano);
    string getNombredeAldeano() const;

    void setEdad(int c);
    int getEdad() const;

    void setGenero(const string &c);
    string getGenero();

    void setSalud(int c);
    int getSalud() const;

    friend ostream& operator <<(ostream &out, const Aldeano &a)
    {
        out << left;
        out << setw(20) << a.nombredeAldeano;
        out << setw(5) << a.edad;
        out << setw(10) << a.genero;
        out << setw(5) << a.salud;

        return out;
    }

    friend istream& operator>>(istream &in, Aldeano &a)
    {

    cout <<"Nombre: ";
    getline(cin, a.nombredeAldeano);

    cout <<"Edad: ";
    cin>>a.edad;

    cout <<"Genero: ";
    cin>>a.genero;

    cout <<"Salud: ";
    cin>>a.genero;


    return in;
    }

     bool operator==(const Aldeano& a)
    {
        return nombredeAldeano == a.nombredeAldeano;
    }
    bool operator==(const Aldeano& a) const
    {
        return nombredeAldeano == a.nombredeAldeano;
    }
    bool operator<(const Aldeano& a) const
    {
        return nombredeAldeano < a.nombredeAldeano;
    }

private:
    string nombredeAldeano;
    int edad;
    string genero;
    int salud;

};




#endif
