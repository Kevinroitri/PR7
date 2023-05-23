#include "FantasmaFinal.h"
#include "GhostHuntingClass.h"

//CONSTRUCTOR
//TIENE COMO PAR�METROS DE ENTRADA LOS ATRIBUTOS PROPIOS
//Y LOS ATRIBUTOS DE LA CLASE QUE HEREDA
//LOS PAR�METROS DE LA CLASE QUE HEREDA SE PASAN COMO PAR�METROS DE ENTRADA
//AL CONSTRUCTOR HEREDADO

JugadorFinal::JugadorFinal(int pLife, int pDmg, string pName, int pPosicionX, int pPosicionY, int pHeal, int pFrozenAttack):

	Jugador( pLife, pDmg, pName, pPosicionX, pPosicionY ) {
	
	heal = pHeal; frozenAttack = pFrozenAttack;

}


//GETTERS AND SETTERS
int JugadorFinal::getheal() {
	return heal;
}
int JugadorFinal::getfrozenAttack() {
	return frozenAttack;
}

void JugadorFinal::setheal(int pHeal) {
	heal = pHeal;
}
void JugadorFinal::setfrozenAttack(int pFrozenAttack) {
	frozenAttack = pFrozenAttack;
}

//METODOS PROPIOS
void JugadorFinal::printAllStats() {

	cout << "La getLife del enemigo final es " << getLife() << endl;
	cout << "La getDmg del enemigo final es " << getDmg() << endl;
	cout << "La getSpeed del enemigo final es " << getName() << endl;
	cout << "La getSpeed del enemigo final es " << getPosicionX() << endl;
	cout << "La getSpeed del enemigo final es " << getPosicionY() << endl;
	cout << "La getSpeed del enemigo final es " << getName() << endl;
	cout << "La getturbo del enemigo final es " << getheal() << endl;
	cout << "La getfrozenAttack del enemigo final es " << getfrozenAttack() << endl;
}