#include "aldeanos.h"
#include <algorithm>
#include <fstream>

/// NOMBRE
void Aldeano::setNombredeAldeano(const string &nombredeAldeano)
{
    this->nombredeAldeano = nombredeAldeano;
}

string Aldeano::getNombredeAldeano() const
{
    return nombredeAldeano;
}

//// EDAD
void Aldeano::setEdad(int edad)
{
    this->edad = edad;
}

int Aldeano::getEdad() const
{
    return edad;
}


//// GENERO
void Aldeano::setGenero(const string &genero)
{
    this->genero = genero;
}

string Aldeano::getGenero()
{
    return genero;
}

//// SALUD
void Aldeano::setSalud(int salud)
{
    this->salud = salud;
}

int Aldeano::getSalud() const
{
    return salud;
}

