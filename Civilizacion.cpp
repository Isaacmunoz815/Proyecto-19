#include "Civilizacion.h"
#include <fstream>
#include <algorithm>

Civilizacion::Civilizacion(){}
void Civilizacion::agregarInicio(const Aldeano &a)
{
    aldeanos.push_front(a);
}
void Civilizacion::agregarFinal(const Aldeano &a)
{
    aldeanos.push_back(a);
}
Civilizacion::Civilizacion(
    const string &nombre,
    double ubicacionx,
    double ubicaciony,
    float puntuacion
    )
    {
     this->nombre = nombre;
     this->ubicacionx = ubicacionx;
     this->ubicaciony= ubicaciony;
     this->puntuacion = puntuacion;

     };

    void Civilizacion::setNombre(const string &v)
    {nombre = v;}
    string Civilizacion::getNombre(){
    return nombre;
    }

    void Civilizacion::setUbicacionx(double v){
    ubicacionx = v;
    }
    double Civilizacion::getUbicacionx(){
    return ubicacionx;
    }

    void Civilizacion::setUbicaciony(double v){
    ubicaciony = v;}
    double Civilizacion::getUblicaciony(){
    return ubicaciony;
    }

    void Civilizacion::setPuntuacion(float v){
    puntuacion = v;}
    float Civilizacion::getPuntuacion(){
    return puntuacion;
    }

    void Civilizacion::setNombredeAldeano(const string &nombredeAldeano)
    {
        this->nombredeAldeano = nombredeAldeano;
    }

    string Civilizacion::getNombredeAldeano()
    {
        return nombredeAldeano;
    }

    void Civilizacion::print()
    {
        for(auto it = aldeanos.begin(); it != aldeanos.end(); it++)
            {
                cout << *it << endl;
            }
    }

    void Civilizacion::eliminarNombredeAldeano(const string &nombredeAldeano)
    {
        for(auto it = aldeanos.begin(); it != aldeanos.end(); it++){
            Aldeano &a = *it;

            if(nombredeAldeano == a.getNombredeAldeano()){
                aldeanos.erase(it);
                break;
            }
        }
    }

    bool comparador(const Aldeano &a)
    {
        return a.getEdad() >= 60;
    }

    void Civilizacion::eliminarEdad()
    {
        aldeanos.remove_if(comparador);
    }

    void Civilizacion::eliminarSalud(size_t salud)
    {
        aldeanos.remove_if([salud](const Aldeano &a){return a.getSalud() <= salud;});
    }

    void Civilizacion::ordenarNombredeAldeano()
    {
        aldeanos.sort();
    }

    bool comparadorEdad(const Aldeano &a1, const Aldeano &a2)
    {
        return a1.getEdad() > a2.getEdad();
    }
    void Civilizacion::ordenarEdad()
    {
        aldeanos.sort(comparadorEdad);
    }

    void Civilizacion::ordenarSalud()
    {
        aldeanos.sort([](const Aldeano &a1, const Aldeano &a2){return a1.getSalud() > a2.getSalud();});
    }

    Aldeano* Civilizacion::buscarAldeano(const Aldeano &a)
    {
     auto it= find(aldeanos.begin(), aldeanos.end(), a);

     if(it == aldeanos.end())
     {
         return nullptr;
     }
     else
     {
         return &(*it);
     }
     }

    Aldeano* Civilizacion::modificarNombredeAldeano(Aldeano &a)
    {
        string nombredeAldeanoActualizado;

        getline(cin,nombredeAldeanoActualizado);
        a.setNombredeAldeano(nombredeAldeanoActualizado);
    }

     Aldeano* Civilizacion::modificarEdad(Aldeano &a)
    {
        size_t edadActualizada;

        cin >> edadActualizada;
        a.setEdad(edadActualizada);

    }
    Aldeano* Civilizacion::modificarGenero(Aldeano &a)
    {
        string generoAldeanoActualizado;

        getline(cin,generoAldeanoActualizado);
        a.setGenero(generoAldeanoActualizado);
    }

     Aldeano* Civilizacion::modificarSalud(Aldeano &a)
    {
        size_t saludActualizada;

        cin >>saludActualizada;
        a.setSalud(saludActualizada);

    }

    void Civilizacion::respaldar_aldeanos()
    {
    ofstream respaldo(getNombre() + ".txt", ios::out);

    for (auto it = aldeanos.begin(); it != aldeanos.end(); ++it) {
        Aldeano &a = *it;
        respaldo << a.getNombredeAldeano() << endl;
        respaldo << a.getEdad()   << endl;
        respaldo << a.getGenero() << endl;
        respaldo << a.getSalud()  << endl;
        }
    respaldo.close();
    }

    void Civilizacion::recuperar_aldeanos(){
    ifstream respaldo(getNombre() + ".txt");
    if(respaldo.is_open()){
        string temp;
        int edad;
        int salud;
        Aldeano a;

        while(true){
            getline(respaldo, temp);
            if(respaldo.eof()){break;} cin.sync();
            a.setNombredeAldeano(temp);

            getline(respaldo, temp);
            edad = stoi(temp); cin.sync();
            a.setEdad(edad);

            getline(respaldo, temp);
            if(respaldo.eof()){break;} cin.sync();
            a.setGenero(temp);

            getline(respaldo, temp);
            salud = stoi(temp); cin.sync();
            a.setSalud(salud);

            agregarFinal(a);
        }
    }
    respaldo.close();
    }

