#include "Persona.h"
#include "Pelicula.h"
#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <time.h>


using namespace std;

Pelicula registrar(){
    /*DATOS DEL LA PELICULA*/
    char titulo[100];
    char nombres[100];
    char apellidos[100];
    char nacionalidad[100];
    int year;
    char genero[100];
	char productora[100];
	double minutos;
    /*DATOS DEL LA PELICULA*/
    cout << "Ingrese el titulo de la pelicula"<<endl;
    cin >> titulo;
    cout << "Ingrese le nombre del director"<<endl;
    cin >> nombres;
    cout << "Ingrese los apellidos del director"<<endl;
    cin >> apellidos;
    cout << "Nacionalidad del director"<< endl;
    cin >> nacionalidad;
    cout << "Annio del la pelicula"<<endl;
    cin >> year;
    cout << "Genero de la pelicula"<<endl;
    cin >> genero;
    cout << "Productora de la pelicula"<<endl;
    cin >> productora;
    cout << "Duracion de la pelicula"<<endl;
    cin >> minutos;
    Persona director =Persona(nombres,apellidos,nacionalidad);
    Pelicula nuevo = Pelicula(titulo,director,year,genero,productora,minutos);
    return nuevo;
}

void menu(){
    cout << "<========= MENU ==============>"<<endl;
    cout << "<=== 1.- Registrar pelicula =====>"<<endl;
    cout << "<=== 2.- Editar pelicula ========>"<<endl;
    cout << "<=== 3.- Eliminar pelicula ======>"<<endl;
    cout << "<=== 4.- Consultar pelicula =====>"<<endl;
    cout << "<=== 5.- Detalles de pelicula ===>"<<endl;
    cout << "<=============================>"<<endl;
}
int main(){
Pelicula peliculas[10];
    bool power = true;
    int op = 0, peliculasC = 0, no = 0;

    while (power){
        menu();
        cin >> op;

        switch (op) {
            case 1:

                peliculas[peliculasC] = registrar();
                peliculasC++;

                break;
            case 2:
                cout << "Ingrese el numero del peliculas"<<endl;
                cin >> no;

                peliculas[no].toString();

                peliculas[no] = registrar();

                break;
            case 3:
                cout << "Ingrese el numero de peliculas"<<endl;
                cin >> no;

                peliculas[no].toString();
                peliculas[no] = Pelicula();
                cout << "Pelicula eliminado"<<endl;

                break;
            case 4:
                cout << "Ingrese el numero del peliculas"<<endl;
                cin >> no;

                peliculas[no].getDirector();

                break;

            case 5:
                cout << "Ingrese el numero de peliculas"<<endl;
                cin >> no;

                peliculas[no].toString();
                break;
            default:
                power = false;
                break;
        }
    }

    return 0;
}

