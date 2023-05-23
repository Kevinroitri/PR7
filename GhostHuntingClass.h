#pragma once
#include <iostream>

using namespace std;
class Jugador
{


private:

	int life;
	int dmg;
	string name;
	int posicionX;
	int posicionY;

public:

	//Constructor

	Jugador(int pLife, int pDmg, string pName, int pPosicionX, int pPosicionY);

	//getters

	int getLife();
	int getDmg();
	string getName();
	int getPosicionX();
	int getPosicionY();

	//setters

	void setLife(int pLife);
	void setDmg(int pDmg);
	void setName(string pName);
	void setPosicionX(int pPosicionX);
	void setPosicionY(int pPosicionY);

	//METODOS PROPIOS
	void printStats();

};

