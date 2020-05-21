#include "Persona.h"
#include "Pelicula.h"
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;


Pelicula::Pelicula(){

}

Pelicula::Pelicula(char titulo[100], Persona director,int year, char genero[100], char productora[100],int minutos) {

   strcpy(this->titulo,titulo);
   this->director =director ;
   this->year = year;
   strcpy(this->genero,genero);
   strcpy(this->productora,productora);
   this->minutos=minutos;
}

void Pelicula::update(char titulo[100], Persona director,int year, char genero[100], char productora[100],int minutos) {
   strcpy(this->titulo,titulo);
   this->director =director ;
   this->year = year;
   strcpy(this->genero,genero);
   strcpy(this->productora,productora);
   this->minutos=minutos;
}

void Pelicula::getDirector() {
    this->director.toString();
}

void Pelicula::toString() {
    cout << "Información de la pelicula"<<endl;
    cout << "Titulo: "<<this->titulo<<endl;
    this->director.toString();
    cout << "Annio: "<<this->year<<endl;
    cout << "Genero: "<<this->genero<<endl;
    cout << "Productora: "<<this->productora<<endl;
    cout << "minutos: "<<this->minutos<<endl;

}
