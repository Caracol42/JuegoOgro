
using namespace std;

class hp {
public:
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

	void recuperarVida(int cantidad) {
		if (cantidad + ActualHP > MaxHP) {
			ActualHP = MaxHP;
			return;
		}

		ActualHP += cantidad;
	}
	// ahora si ve, 
	//Constructor HP
	hp() {
		ActualHP = 3;
		MaxHP = 3;
	}
	hp(int _ActualHP, int _MaxHP) {
		ActualHP = _ActualHP;
		MaxHP = _MaxHP;
		if (ActualHP > MaxHP)
			ActualHP = MaxHP;
	}


private:
	int ActualHP;
	int MaxHP;


};