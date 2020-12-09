#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "Civilizacion.h"
#include <vector>

class Videogame
{
    vector<Civilizacion> civilizaciones;
    string nombredeUsuario;
public:
    Videogame();
    Videogame(const string &nombredeUsuario)
    : nombredeUsuario(nombredeUsuario){}
    void setNombredeUsuario(const string &nombredeUsuario);
    string getNombredeUsuario();
    void agregarCivilizacion(const Civilizacion &c);
    void mostrar();
    void respaldar();
    void respaldar_tabla();
    void recuperar();
    void insertar(const Civilizacion &c, size_t pos);
    size_t size();
    void inicializar(const Civilizacion &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    void ordenarNombre();
    void ordenarUbicacionx();
    void ordenarUbicaciony();
    void ordenarPuntuacion();
    Civilizacion* modificarNombre(Civilizacion &c);
    Civilizacion* modificarUbicacionx(Civilizacion &c);
    Civilizacion* modificarUbicaciony(Civilizacion &c);
    Civilizacion* modificarPuntuacion(Civilizacion &c);
    Civilizacion* buscar(const Civilizacion &c);


    friend Videogame& operator <<(Videogame &l, const Civilizacion &c)
    {
        l.agregarCivilizacion(c);

        return l;
    }
};

#endif // LABORATORIO_H
