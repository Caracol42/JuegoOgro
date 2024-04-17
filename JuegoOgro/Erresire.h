#include "hp.h"

class Erresire {
	//Atributos
	int ActualHP;
	int MaxHP;

	bool nuevoHpMaximo(int new_hp_max) {
		if (new_hp_max < 1)
			return;

		MaxHP = new_hp_max;

		if (ActualHP > MaxHP)
			ActualHP = MaxHP;

		return true;
	}

	bool recibirDano(int dano) {
		if (dano > ActualHP)
			ActualHP = 0;
		return;

		ActualHP -= dano;
	}
};