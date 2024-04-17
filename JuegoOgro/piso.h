#include "casilla.h"
#include <map>

using namespace std;

class piso {
private:
	casilla* entrada;//Primera casilla
	map<pair<char, int>, casilla*> adyacentes;
	int NumeroPiso = 1;
public:
	//Constructor
	void CalabozoImpresor() {
		entrada = NULL;
		CalabozoGenetador();
		NumeroPiso = 1;
	}
	
	//Método para generar el calabozo
	void CalabozoGenetador() {

		//Crear casillas para el calabozo y establecer las coordenadas
		for (char horizontal = 'A'; horizontal <= 'J'; ++horizontal) {
			for (int vertical = 1; vertical <= 10; ++vertical) {
				casilla* nuevaposicion = new casilla;
				nuevaposicion->personajeParado = NULL; // Inicialmente no hay personaje en la celda
				nuevaposicion->arriba = NULL;
				nuevaposicion->abajo = NULL;
				nuevaposicion->izq = NULL;
				nuevaposicion->der = NULL;

				adyacentes[{horizontal, vertical}] = nuevaposicion;

				// Establecer relaciones de nodos vecinos
				if (horizontal != 'A') {
					nuevaposicion->izq = adyacentes[{static_cast<char>(horizontal - 1), vertical}];
					adyacentes[{static_cast<char>(horizontal - 1), vertical}]->der = nuevaposicion;
				}
			}
		}
	}


	};