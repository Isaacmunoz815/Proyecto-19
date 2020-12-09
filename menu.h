#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

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
void menu(Civilizacion &c)
{
    size_t op2;

    while(true){
    cout <<".........ALDEANOS........."<< endl;
    cout << "1) Agregar aldeano" << endl;
    cout << "2) Eliminar aldeano" << endl;
    cout << "3) Clasificar aldeanos" << endl;
    cout << "4) Buscar aldeano"<<endl;
    cout << "5) Modificar aldeano"<<endl;
    cout << "6) Mostar aldeanos"<<endl;
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
            c.agreagrInicio(capturar());
            system("cls");
        }
        if(opcion1 == 2){
            system("CLS");
            fflush(stdin);
            Aldeano a = capturar();
            c.agregarFinal(a);
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
            system("cls");
            fflush(stdin);

            cout << "Nombre del aldeano: ";
            system("cls");
            fflush(stdin);

            getline(cin, nombredeAldeano);
            c.eliminarNombredeAldeano(nombredeAldeano);

            system ("PAUSE");
            system("cls");
        }
        else if(opcion2 == 2){
            size_t edad;
            system("CLS");
            fflush(stdin);

            cout << "Edad";
            cin>>edad;

            c.eliminarEdad();

            system("cls");
        }
        else if(opcion2 == 3){
            size_t salud;
            system("CLS");
            fflush(stdin);

            c.eliminarSalud();

            system("cls");
        }
        else if(opcion2 == 4){
            system ("PAUSE");
            system("cls");
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
            c.ordenarNombredeAldeano();
            system ("PAUSE");
            system("cls");
        }
        if(opcion3 == 2){
            system("CLS");
            fflush(stdin);
            c.ordenarEdad();
            system ("PAUSE");
            system("cls");
        }
        if(opcion3 == 3){
            system("CLS");
            fflush(stdin);
            c.ordenarSalud();
            system ("PAUSE");
            system("cls");
        }

        if(opcion3 == 4){
            system ("PAUSE");
            system("cls");
            break;
        }
        }

    }
    else if(op2 == 4){

        }
    else if(op2 == 5){

        }
    else if(op2 == 6){
        system("cls");
        c.print();
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
#endif // MENU_H_INCLUDED
