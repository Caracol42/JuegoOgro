#include "Erresire.h"

class PersonajeMJM {
public:
	char symbol;
};

class casilla {
public:
	PersonajeMJM* personajeParado;
	//Erresire parado;
	casilla* arriba;
	casilla* abajo;
	casilla* izq;
	casilla* der;

};