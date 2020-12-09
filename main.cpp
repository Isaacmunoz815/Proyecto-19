#include <iostream>
#include "Videogame.h"
#include <vector>
using namespace std;

Aldeano capturar()
{
    Aldeano a;
    string nombredeAldeano;
    size_t edad;
    string genero;
    size_t salud;

    cout << "Nombre del aldeano:";
    getline(cin, nombredeAldeano);
    a.setNombredeAldeano(nombredeAldeano);

    cout << "Edad del aldeano:";
    cin>>edad;
    a.setEdad(edad);

    fflush(stdin);

    cout << "Genero del aldeano:";
    getline(cin, genero);
    a.setGenero(genero);

    cout << "Salud del aldeano:";
    cin>>salud;
    a.setSalud(salud);

    return a;
}
int main (){
    Videogame v;
    string op;
    string nombredeUsuario;

    ////Civilizacion minecraft("Minecraft");

    ///Aldeano a1("Steve", 15, "Hombre", 30);
    ///Aldeano a2("Crepper",85, "Hombre", 95);
    ///Aldeano a3("Zombie",18, "Hombre", 40);
    ///Aldeano a4("Alex",20, "Mujer", 90);

    ///minecraft.agreagrInicio(a1);
    ///minecraft.agregarFinal(a2);
    ///minecraft.agregarFinal(a3);
    ///minecraft.agregarFinal(a4);

    ///minecraft.print();
    ///cout << endl;
    ///minecraft.eliminarNombredeAldeano("Crepper");

    ///minecraft.eliminarSalud(50);

    //minecraft.ordenarNombredeAldeano();

    ///minecraft.ordenarEdad();

    ///minecraft.ordenarSalud();

    ///minecraft.print();
    ///cout << endl;

    while (true)
        {   cout << "..........CIVILIZACIONES............";
        cout << endl << endl;
        cout << "Nombre de Usuario: "<<v.getNombredeUsuario();
        cout << endl << endl;
        cout << "1) Nombre de Usuario: "<<endl;
        cout << "2) Agregar Civilizacion" << endl;
        cout << "3) Mostrar" << endl;
        cout << "4) Respaldar" << endl;
        cout << "5) Recuperar" << endl;
        cout << "6) Insertar" << endl;
        cout << "7) Inicializar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Ordenar" << endl;
        cout << "10) Ordenar por Nombre" << endl;
        cout << "11) Ordenar por Ubicacion X" << endl;
        cout << "12) Ordenar por Ubicacion Y" << endl;
        cout << "13) Ordenar por Puntuacion" << endl;
        cout << "14) Buscar Civilizacion" << endl;
        cout << "15) Modificar"<< endl;
        cout << "0) Salir" << endl;
        cout << endl << endl;
        cout << "Opcion: ";
        getline(cin, op);

        if (op == "1")
        {
            system ("cls");
            cout << "Escribe un nombre de usuario:"<<endl;
            getline(cin, nombredeUsuario);

            v.setNombredeUsuario(nombredeUsuario);
            system ("Pause");
            system("cls");
        }
        if(op == "2")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;
            v.agregarCivilizacion(c);
            cin.ignore();

            system ("PAUSE");
            system("CLS");
        }
        else if (op == "3")
        {
            system("CLS");
            v.mostrar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "4")
        {
            system("CLS");
            v.respaldar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "5")
        {
            system("CLS");
            v.recuperar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "6")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;

            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                v.insertar(c, pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "7")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;

            size_t n;

            cout << "n: ";
            cin>> n; cin.ignore();

            v.inicializar(c, n);
            system ("PAUSE");
            system("CLS");

        }
        else if(op == "8")
        {
            system("CLS");
            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                v.eliminar(pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "9")
        {
            system("CLS");
            v.ordenar();
            system ("PAUSE");
            system("CLS");
        }
         else if(op == "10")
        {
            v.ordenarNombre();
        }
        else if(op == "11")
        {
            v.ordenarUbicacionx();
        }
        else if(op == "12")
        {
            v.ordenarUbicaciony();
        }
        else if(op == "13")
        {
            v.ordenarPuntuacion();
        }
        else if(op == "14")
        {
            system("CLS");
            Civilizacion c;
            cin>>c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No encontrado" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                cout << *ptr << endl;

                system ("PAUSE");
                system("CLS");
                size_t op2;

                while(true){

                cout <<".........ALDEANOS........."<< endl;
                cout << "1) Agregar aldeano" << endl;
                cout << "2) Eliminar aldeano" << endl;
                cout << "3) Clasificar aldeanos" << endl;
                cout << "4) Buscar aldeano"<<endl;
                cout << "5) Modificar aldeano"<<endl;
                cout << "6) Mostrar aldeanos"<<endl;
                cout << "7) Regresar al menu principal" << endl;
                cout << "Opcion: ";
                cin >> op2; cin.ignore();


                if (op2 == 1){
                    system ("CLS");
                    size_t opcion1;
                    while(true){
                    cout <<"........AGREGAR ALDEANOS......"<<endl;
                    cout <<"1) Agregar al inicio"<<endl;
                    cout <<"2) Agregar al final"<<endl;
                    cout <<"3) Salir" <<endl;
                    cout << "Opcion: ";
                    cin>>opcion1;

                    if(opcion1 == 1){

                        system("CLS");
                        fflush(stdin);
                        ptr->agregarInicio(capturar());
                        ptr->setPuntuacion(ptr->getPuntuacion()+100);
                        system("cls");
                    }
                    if(opcion1 == 2){
                        system("CLS");
                        fflush(stdin);
                        Aldeano a = capturar();
                        ptr->agregarFinal(a);
                        ptr->setPuntuacion(ptr->getPuntuacion()+100);
                        system("cls");
                    }
                    if(opcion1 == 3){
                        system("cls");
                        break;
                    }
                    }
                }
                else if(op2 == 2){
                    system ("CLS");
                    size_t opcion2;
                    while(true){
                    cout <<"........ELIMINAR ALDEANOS......"<<endl;
                    cout <<"1) Eliminar por nombre"<<endl;
                    cout <<"2) Eliminar por la edad"<<endl;
                    cout <<"3) Eliminar por la salud"<<endl;
                    cout <<"4) Salir" <<endl;
                    cout << "Opcion: ";
                    cin>>opcion2;

                    if(opcion2 == 1){
                        string nombredeAldeano;
                        fflush(stdin);

                        cout << "Nombre del aldeano: ";
                        fflush(stdin);

                        getline(cin, nombredeAldeano);
                        ptr->eliminarNombredeAldeano(nombredeAldeano);

                        system ("PAUSE");
                        system("cls");
                    }
                    if(opcion2 == 2){
                        system("CLS");
                        fflush(stdin);

                        ptr->eliminarEdad();

                        system("cls");
                    }
                    if(opcion2 == 3){
                        size_t saludaEliminar;

                        system("CLS");
                        fflush(stdin);

                        cout << "Escribe la cantidad de salud para eliminar aldeanos";
                        cin>>saludaEliminar;

                        ptr->eliminarSalud(saludaEliminar);

                        system("cls");
                    }

                    if(opcion2 == 4){
                        system ("PAUSE");
                        break;
                    }

                    }
                    }

                else if(op2 == 3){
                    system ("CLS");
                    size_t opcion3;
                    while(true){
                    cout <<"........ORDENAR ALDEANOS......"<<endl;
                    cout <<"1) Ordenar por nombre (ascendente)"<<endl;
                    cout <<"2) Ordenar por edad(descendiente)"<<endl;
                    cout <<"3) Ordenar por salud (descendiente)"<<endl;
                    cout <<"4) Salir" <<endl;
                    cout << "Opcion: ";
                    cin>>opcion3;

                    if(opcion3 == 1){
                        system("CLS");
                        fflush(stdin);
                        ptr->ordenarNombredeAldeano();
                        system ("PAUSE");
                        system("cls");
                    }
                    if(opcion3 == 2){
                        system("CLS");
                        fflush(stdin);
                        ptr->ordenarEdad();
                        system ("PAUSE");
                        system("cls");
                    }
                    if(opcion3 == 3){
                        system("CLS");
                        fflush(stdin);
                        ptr->ordenarSalud();
                        system ("PAUSE");
                        system("cls");
                    }

                    if(opcion3 == 4){
                        system("cls");
                        break;
                    }
                    }

                }
                else if(op2 == 4){
                        system("CLS");
                        Aldeano a;
                        cin>>a; cin.ignore();

                        Aldeano *otr = ptr->buscarAldeano(a);

                        if(otr == nullptr)
                        {
                            cout << "No encontrado" << endl;
                            system ("PAUSE");
                            system("CLS");
                        }
                        else
                        {
                            cout << *otr << endl;

                            system ("PAUSE");
                            system("CLS");
                        }
                }
                else if(op2 == 5){
                        fflush(stdin);
                        system("CLS");
                        Aldeano a;
                        cin>>a; cin.ignore();

                        Aldeano *otr = ptr->buscarAldeano(a);

                        if(otr == nullptr)
                        {
                            cout << "No encontrado" << endl;
                            system ("PAUSE");
                            system("CLS");
                        }
                        else
                        {
                            cout << "Aldeano encontrado";
                            system("CLS");

                            fflush(stdin);
                            cout << "Escribe el nuevo nombre del aldeano: "<<endl;
                            ptr->modificarNombredeAldeano(*otr);

                            fflush(stdin);
                            cout << "Escribe la nueva edad del aldeano: "<<endl;
                            ptr->modificarEdad(*otr);

                            fflush(stdin);
                            cout << "Escribe el nuevo genero del aldeano: "<<endl;
                            ptr->modificarGenero(*otr);


                            cout << "Escribe la nueva salud del aldeano: "<<endl;
                            ptr->modificarSalud(*otr);

                            system("CLS");
                            }
                    }

                else if(op2 == 6){
                    system("cls");
                    ptr->print();
                    system("Pause");
                    system("cls");
                    }
                else if(op2 == 7){
                    system ("PAUSE");
                    system ("CLS");
                    break;
                    }
                }
                }

        }
        else if(op == "0")
        {
            break;
        }
        else if(op == "15")
        {
            fflush(stdin);
            system("CLS");
            Civilizacion c;
            cin>>c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No encontrado" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                cout << "Civilizacion encontrada";
                fflush(stdin);
                system("CLS");

                cout << "Escribe el nuevo nombre de la civilizacion: "<<endl;
                v.modificarNombre(*ptr);
                cout << "Escribe la nueva ubicacion X de la civilizacion: "<<endl;
                v.modificarUbicacionx(*ptr);
                cout << "Escribe la nueva ubicacion y de la civilizacion: "<<endl;
                v.modificarUbicaciony(*ptr);
                cout << "Escribe la nueva puntuacion de la civilizacion: "<<endl;
                v.modificarPuntuacion(*ptr);

                system("PAUSE");
                system("CLS");
            }
        }
    }

    return 0;
}
