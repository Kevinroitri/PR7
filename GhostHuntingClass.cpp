#include "GhostHuntingClass.h"
#include <Windows.h>

//CONSTRUCTOR 

Jugador::Jugador(int pLife, int pDmg, string pName, int pPosicionX, int pPosicionY) {

	life = pLife;
	dmg = pDmg;
	name = pName;
	posicionX = pPosicionX;
	posicionY = pPosicionY;
}

//GETTERS:

int Jugador::getLife() {

	return life;
}

int Jugador::getDmg() {

	return dmg;
}

string Jugador::getName() {

	return name;
}

int Jugador::getPosicionX() {

	return posicionX;
}

int Jugador::getPosicionY() {

	return posicionY;
}


//SETTERS:

void Jugador::setLife(int pLife) {

	life = pLife;

}

void Jugador::setDmg(int pDmg) {

	dmg = pDmg;

}

void Jugador::setName(string pName) {

	name = pName;

}

void Jugador::setPosicionX(int pPosicionX) {

	posicionX = pPosicionX;

}

void Jugador::setPosicionY(int pPosicionY) {

	posicionY = pPosicionY;

}

//METODOS PROPIOS

void Jugador::printStats() {

	cout << "La vida del enemigo final es " << getLife() << endl;
	cout << "La vida del enemigo final es " << getDmg() << endl;
	cout << "La vida del enemigo final es " << getName() << endl;
	cout << "La vida del enemigo final es " << getPosicionX() << endl;
	cout << "La vida del enemigo final es " << getPosicionY() << endl;
}

