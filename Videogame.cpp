#include "Videogame.h"
#include <fstream>
#include <algorithm>

Videogame::Videogame()
{
}

void Videogame::agregarCivilizacion(const Civilizacion &c)
{
    civilizaciones.push_back(c);
}
void Videogame::mostrar()
{
     cout << left;
     cout <<setw(30) << "Nombre";
     cout <<setw(20) << "Ublicacion en X";
     cout <<setw(20) << "Ublicacion en y";
     cout <<setw(20) << "Puntuacion";
     cout << endl;
     for(size_t i=0; i<civilizaciones.size(); i++){
        Civilizacion &c = civilizaciones[i];
        cout << c;
     }
}
void Videogame::respaldar_tabla()
{

    ofstream archivo("Civilizaciones_tablas.txt");
    if(archivo.is_open()){
        archivo<< left;
     archivo <<setw(30) << "Nombre";
     archivo<<setw(30) << "Ublicacion en x";
     archivo <<setw(10) << "Ublicacion en y";
     archivo <<setw(6) << "Puntuacion";
     archivo << endl;
        for(size_t i=0; i<civilizaciones.size(); i++){
        Civilizacion &c = civilizaciones[i];
        archivo << c;
        }
    }
    archivo.close();
}
void Videogame::respaldar()
{

    ofstream archivo("Civilizaciones.txt");
    if(archivo.is_open()){
        for(size_t i=0; i<civilizaciones.size(); i++){
        Civilizacion &c = civilizaciones[i];
        archivo << c.getNombre() << endl;
        archivo << c.getUbicacionx() << endl;
        archivo << c.getUblicaciony() << endl;
        archivo << c.getPuntuacion() << endl;
        c.respaldar_aldeanos();
        }

    }
    archivo.close();
}

void Videogame::recuperar(){

ifstream archivo("Civilizaciones.txt");
if(archivo.is_open()){
    string temp;
    double ubicacionx;
    double ubicaciony;
    float puntuacion;

    while(true)
     {
    Civilizacion c;
    getline(archivo, temp);
    if(archivo.eof()){
        break;
    }
    c.setNombre(temp);

    getline(archivo, temp);
    ubicacionx = stoi(temp);
    c.setUbicacionx(ubicacionx);

    getline(archivo, temp);
    ubicaciony = stoi(temp);
    c.setUbicaciony(ubicaciony);

    getline(archivo, temp);
    puntuacion = stoi(temp);
    c.setPuntuacion(puntuacion);

    c.recuperar_aldeanos();
    insertar(c, 0);
    }

  }
  archivo.close();
}

void Videogame::insertar(const Civilizacion &p, size_t pos)
{
    civilizaciones.insert(civilizaciones.begin()+pos, p);
}

size_t Videogame::size()
{
    return civilizaciones.size();
}

void Videogame::inicializar(const Civilizacion &c, size_t n)
{
    civilizaciones = vector<Civilizacion>(n, c);
}

void Videogame::eliminar(size_t pos)
{
    civilizaciones.erase(civilizaciones.begin()+pos);
}

void Videogame::ordenar()
{
    sort(civilizaciones.begin(), civilizaciones.end());
}

void Videogame::ordenarNombre()
{
    sort(civilizaciones.begin(), civilizaciones.end(),
    [] ( Civilizacion c1, Civilizacion c2){return c1.getNombre() < c2.getNombre();});
}

void Videogame::ordenarUbicacionx()
{
    sort(civilizaciones.begin(), civilizaciones.end(),
    [] ( Civilizacion c1, Civilizacion c2){return c1.getUbicacionx() < c2.getUbicacionx();});
}

void Videogame::ordenarUbicaciony()
{
    sort(civilizaciones.begin(), civilizaciones.end(),
    [] ( Civilizacion c1, Civilizacion c2){return c1.getUblicaciony() < c2.getUblicaciony();});
}

void Videogame::ordenarPuntuacion()
{
    sort(civilizaciones.begin(), civilizaciones.end(),
    [] ( Civilizacion c1, Civilizacion c2){return c1.getPuntuacion() < c2.getPuntuacion();});
}


Civilizacion* Videogame::buscar(const Civilizacion &c)
{
     auto it= find(civilizaciones.begin(), civilizaciones.end(), c);

     if(it == civilizaciones.end()){
         return nullptr;
     }
     else
     {
         return &(*it);
     }
}

void Videogame::setNombredeUsuario(const string &nombredeUsuario)
{
    this->nombredeUsuario = nombredeUsuario;
}

string Videogame::getNombredeUsuario()
{
    return nombredeUsuario;
}

Civilizacion* Videogame::modificarNombre(Civilizacion &c)
    {
        string nombreActualizado;

        getline(cin,nombreActualizado);
        c.setNombre(nombreActualizado);
    }

Civilizacion* Videogame::modificarUbicacionx(Civilizacion &c)
{
    double ubicacionxActualizada;

    cin >> ubicacionxActualizada;
    c.setUbicacionx(ubicacionxActualizada);

}

Civilizacion* Videogame::modificarUbicaciony(Civilizacion &c)
{
    double ubicacionyActualizada;

    cin >> ubicacionyActualizada;
    c.setUbicaciony(ubicacionyActualizada);

}

Civilizacion* Videogame::modificarPuntuacion(Civilizacion &c)
    {
        float puntuacionNueva;

        cin >> puntuacionNueva;
        c.setPuntuacion(puntuacionNueva);
    }


