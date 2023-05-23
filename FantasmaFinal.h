#include "GhostHuntingClass.h"
#include <iostream>

using namespace std;

class JugadorFinal : public Jugador
{
private:

	int heal;
	int frozenAttack;

public:

	//CONSTRUCTOR CON ELEMENTOS DE LA CLASE PADRE Y PROPIA
	JugadorFinal(int pLife, int pDmg, string pName, int pPosicionX, int pPosicionY, int pHeal, int pFrozenAttack);

	//GETTERS AND SETTERS
	int getheal();
	int getfrozenAttack();

	void setheal(int pHeal);
	void setfrozenAttack(int pFrozenAttack);

	//METODOS PROPIOS
	void printAllStats();


};