#ifndef UNTITLED_PELICULA_H
#define UNTITLED_PELICULA_H
#include "Persona.h"
#include <cstring>
#include <string>
class Pelicula{
	private:
		char titulo[100];
		Persona director;
		int year;
		char genero[100];
		char productora[100];
		int minutos;
		
	public:
        Pelicula();
        Pelicula(char[], Persona ,int ,char[],char[],int);	
		void update(char[], Persona, int, char[],char[],int);
        void getDirector();
        void toString();	
};

#endif //UNTITLED_PELICULA_H
