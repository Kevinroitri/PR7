#include <iostream>
#include "GhostHuntingClass.h"
#include "FantasmaFinal.h"
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;
void pantallaDeCarga();
void enemyCombat(Jugador& enemigo, Jugador jugador);

int main() {
	
	srand(time(NULL));


	pantallaDeCarga();

	cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
	cout << R"(



		:::::::  :::    :::  ::::::::   :::::::: :::::::::::          :::    ::: :::    ::: ::::    ::: ::::::::::: ::::::::::: ::::    :::  :::::::: 
	    :+:    :+: :+:    :+: :+:    :+: :+:    :+:    :+:              :+:    :+: :+:    :+: :+:+:   :+:     :+:         :+:     :+:+:   :+: :+:    :+: 
	   +:+        +:+    +:+ +:+    +:+ +:+           +:+              +:+    +:+ +:+    +:+ :+:+:+  +:+     +:+         +:+     :+:+:+  +:+ +:+         
	  :#:        +#++:++#++ +#+    +:+ +#++:++#++    +#+              +#++:++#++ +#+    +:+ +#+ +:+ +#+     +#+         +#+     +#+ +:+ +#+ :#:          
	 +#+   +#+# +#+    +#+ +#+    +#+        +#+    +#+              +#+    +#+ +#+    +#+ +#+  +#+#+#     +#+         +#+     +#+  +#+#+# +#+   +#+#    
	#+#    #+# #+#    #+# #+#    #+# #+#    #+#    #+#              #+#    #+# #+#    #+# #+#   #+#+#     #+#         #+#     #+#   #+#+# #+#    #+#     
	########  ###    ###  ########   ########     ###              ###    ###  ########  ###    ####     ###     ########### ###    ####  ########       

		)" << '\n';


	Sleep(2000);
	system("cls");

	Jugador jugador(150, 25,"", 1 , 0 );
	Jugador Enemigo1(30, 10, "Oriol", 0 , 0);
	Jugador Enemigo2(30, 10, "Guillem", 0, 0);
	Jugador Enemigo3(30, 10, "Sergi", 0, 0);
	JugadorFinal EnemigoBoss(120, 15, "Popeye", 0, 0, 30, 40);

	// Crear una matriz de 3 filas y 4 columnas
	char tabla[10][6] = {

	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	   { '|', '.', '.', '.', '.', '|'},
	};

	//HEROE X=3 Y=5

	tabla[jugador.getPosicionY()][jugador.getPosicionX()] = 1;

	//Declaracionde tu nombre

	string nombre;
	cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
	cout << setw(50) << "\t";
	cout << "Introduce tu nombre: " << endl;
	cout << setw(50) << "\t";
	cin >> nombre;
	cout << "\n" << "\n" << endl;
	jugador.setName(nombre);

	//Posicion enemigos

	int randomX = 0;
	int randomY = 0;

	randomX = (rand() % 4) + 1;
	randomY = (rand() % 8) + 1;

	Enemigo1.setPosicionX(randomX);
	Enemigo1.setPosicionY(randomY);

	tabla[Enemigo1.getPosicionY()][Enemigo1.getPosicionX()];

	randomX = (rand() % 4) + 1;
	randomY = (rand() % 8) + 1;

	Enemigo2.setPosicionX(randomX);
	Enemigo2.setPosicionY(randomY);

	tabla[Enemigo2.getPosicionY()][Enemigo2.getPosicionX()];

	randomX = (rand() % 4) + 1;
	randomY = (rand() % 8) + 1;

	Enemigo3.setPosicionX(randomX);
	Enemigo3.setPosicionY(randomY);

	tabla[Enemigo3.getPosicionY()][Enemigo3.getPosicionX()];
	


	while (jugador.getPosicionY() != 9 && jugador.getLife() > 0)
	{

		// Imprimir la tabla

		for (int fila = 0; fila < 10; fila++) {
			cout << setw(50) << "\t";
			for (int columna = 0; columna < 6; columna++) {

				cout << tabla[fila][columna] << "\t";
			}
			cout << endl;
		}
		
		int tecla = _getch();
		system("cls");
		if (tecla == 72) {

			if (jugador.getPosicionY() == 0)
			{
				cout << setw(55) << "\t";
				cout << "movimiento erroneo: " << endl;
			}
			else {
			
				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = '.';
				jugador.setPosicionY(jugador.getPosicionY() - 1);
				jugador.setPosicionX(jugador.getPosicionX());
				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = 1;
			
			}

		}// key up
		else if (tecla == 80) {

			if (jugador.getPosicionY() == 11)
			{
				cout << setw(55) << "\t";
				cout << "movimiento erroneo: " << endl;
			}
			else {

				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = '.';
				jugador.setPosicionY(jugador.getPosicionY() + 1);
				jugador.setPosicionX(jugador.getPosicionX());
				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = 1;

			}

		}// key down
			
		else if (tecla == 77) {

			if (jugador.getPosicionX() == 4)
			{
				cout << setw(55) << "\t";
				cout << "movimiento erroneo: " << endl;
			}
			else {

				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = '.';
				jugador.setPosicionY(jugador.getPosicionY());
				jugador.setPosicionX(jugador.getPosicionX() + 1);
				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = 1;

			}
		
		}// key right

		else if (tecla == 75) {

			if (jugador.getPosicionX() == 1)
			{
				cout << setw(55) << "\t";
				cout << "movimiento erroneo: " << endl;
			}
			else {

				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = '.';
				jugador.setPosicionY(jugador.getPosicionY());
				jugador.setPosicionX(jugador.getPosicionX() - 1);
				tabla[jugador.getPosicionY()][jugador.getPosicionX()] = 1;

			}

		}// key left
			

		if (tabla[jugador.getPosicionY()][jugador.getPosicionX()] == tabla[Enemigo1.getPosicionY()][Enemigo1.getPosicionX()])
		{
			enemyCombat(Enemigo1, jugador);
		}
		else if (tabla[jugador.getPosicionY()][jugador.getPosicionX()] == tabla[Enemigo2.getPosicionY()][Enemigo2.getPosicionX()])
		{
			enemyCombat(Enemigo2, jugador);
		}
		else if (tabla[jugador.getPosicionY()][jugador.getPosicionX()] == tabla[Enemigo3.getPosicionY()][Enemigo3.getPosicionX()])
		{
			enemyCombat(Enemigo3, jugador);
		}
		else {

			cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
			cout << setw(50) << "\t";
			cout << "no has encontrado ningun enemigo sigue tu camino " << endl;
			cout << "\n" << endl;

		}

	}
	system("cls");

	if (jugador.getPosicionY() == 9 && jugador.getLife() > 0)
	{
		cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
		cout << R"(


      :::::::::: ::::::::::: ::::    :::     :::     :::           :::::::::   ::::::::   ::::::::   :::::::: 
     :+:            :+:     :+:+:   :+:   :+: :+:   :+:           :+:    :+: :+:    :+: :+:    :+: :+:    :+: 
    +:+            +:+     :+:+:+  +:+  +:+   +:+  +:+           +:+    +:+ +:+    +:+ +:+        +:+         
   :#::+::#       +#+     +#+ +:+ +#+ +#++:++#++: +#+           +#++:++#+  +#+    +:+ +#++:++#++ +#++:++#++   
  +#+            +#+     +#+  +#+#+# +#+     +#+ +#+           +#+    +#+ +#+    +#+        +#+        +#+    
 #+#            #+#     #+#   #+#+# #+#     #+# #+#           #+#    #+# #+#    #+# #+#    #+# #+#    #+#     
###        ########### ###    #### ###     ### ##########    #########   ########   ########   ########       
                                                                                                              


		)" << '\n';
		Sleep(2000);
		system("cls");


		cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
		cout << setw(50) << "\t";
		cout << "te has encontrado con el enemigo final: " << EnemigoBoss.getName() << endl;
		Sleep(1000);
		cout << setw(50) << "\t";
		cout << "toca luchar con el enemigo final: " << EnemigoBoss.getName() << endl;
		Sleep(1000);

		while (jugador.getLife() > 0 && EnemigoBoss.getLife() > 0)
		{

			int randomAtack = 0;

			randomAtack = (rand() % 10) + 1;

			if (randomAtack == 5)
			{
				cout << setw(50) << "\t";
				cout << "El enemigo realizara ataque especial con un daño de: " << EnemigoBoss.getfrozenAttack() << endl;
				Sleep(1000);
				jugador.setLife(jugador.getLife() - EnemigoBoss.getfrozenAttack());
			}
			else if (randomAtack == 7) {
				
				cout << setw(50) << "\t";
				cout << "El enemigo se curara la vida en un total de: " << EnemigoBoss.getheal() << " Puntos de vida " << endl;
				Sleep(1000);
				EnemigoBoss.setLife(EnemigoBoss.getLife() + EnemigoBoss.getheal());
			}
			else {

				cout << setw(50) << "\t";
				cout << "Combate a muerte normal: " << EnemigoBoss.getName() << endl;
				Sleep(1000);
				jugador.setLife(jugador.getLife() - EnemigoBoss.getDmg());
				EnemigoBoss.setLife(EnemigoBoss.getLife() - jugador.getDmg());
			}
		}

		if (jugador.getLife() <= 0)
		{
			cout << setw(50) << "\t";
			cout << "El Jugador con nombre: " << jugador.getName() << " ha muerto " << endl;
			Sleep(1000);
		}
		else if (EnemigoBoss.getLife() <= 0) {

			cout << setw(50) << "\t";
			cout << "El Enemigo con nombre: " << EnemigoBoss.getName() << " ha muerto " << endl;
			Sleep(1000);
		}

	}
	system("cls");
	if (jugador.getLife() <= 0) {
	
		cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
		cout << R"(


				  ::::::::      :::       :::   :::   ::::::::::          ::::::::  :::     ::: :::::::::: ::::::::: 
				:+:    :+:   :+: :+:    :+:+: :+:+:  :+:                :+:    :+: :+:     :+: :+:        :+:    :+: 
			   +:+         +:+   +:+  +:+ +:+:+ +:+ +:+                +:+    +:+ +:+     +:+ +:+        +:+    +:+  
			  :#:        +#++:++#++: +#+  +:+  +#+ +#++:++#           +#+    +:+ +#+     +:+ +#++:++#   +#++:++#:    
			 +#+   +#+# +#+     +#+ +#+       +#+ +#+                +#+    +#+  +#+   +#+  +#+        +#+    +#+    
			#+#    #+# #+#     #+# #+#       #+# #+#                #+#    #+#   #+#+#+#   #+#        #+#    #+#     
			########  ###     ### ###       ### ##########          ########      ###     ########## ###    ###      


		)" << '\n';
		Sleep(5000);
		system("cls");
	
	}

	if (EnemigoBoss.getLife() <= 0) {

		cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
		cout << R"(



				   :::     ::: ::::::::::: :::::::: ::::::::::: ::::::::  :::::::::  :::::::::::     :::  
				  :+:     :+:     :+:    :+:    :+:    :+:    :+:    :+: :+:    :+:     :+:       :+: :+: 
				 +:+     +:+     +:+    +:+           +:+    +:+    +:+ +:+    +:+     +:+      +:+   +:+ 
				+#+     +:+     +#+    +#+           +#+    +#+    +:+ +#++:++#:      +#+     +#++:++#++: 
				+#+   +#+      +#+    +#+           +#+    +#+    +#+ +#+    +#+     +#+     +#+     +#+  
				#+#+#+#       #+#    #+#    #+#    #+#    #+#    #+# #+#    #+#     #+#     #+#     #+#   
				 ###     ########### ########     ###     ########  ###    ### ########### ###     ###    


		)" << '\n';
		Sleep(5000);
		system("cls");

	}

	return 0;

}

void pantallaDeCarga() {

	for (int i = 0; i < 20; i++)
	{
		cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
		cout << setw(85);
		cout << "Cargando..." << endl;
		cout << setw(90);
		cout << "===================\n" << endl;
		cout << setw(71);
		char carga = 254;
		for (int j = 0; j < i; j++)
		{

			cout << carga;
		}

		cout << "\n" << endl;
		cout << setw(90) << "===================\n" << endl;
		Sleep(250);
		system("cls");
	}

}
void enemyCombat(Jugador& enemigo, Jugador jugador) {

	cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << endl;
	cout << setw(50) << "\t";
	cout << "te has encontrado con el enemigo: " << enemigo.getName() << endl;
	Sleep(1000);
	cout << setw(50) << "\t";
	cout << "toca luchar con el enemigo: " << enemigo.getName() << endl;
	Sleep(1000);

	while (jugador.getLife() > 0 && enemigo.getLife() > 0)
	{
		jugador.setLife(jugador.getLife() - enemigo.getDmg());
		enemigo.setLife(enemigo.getLife() - jugador.getDmg());
	}

	if (jugador.getLife() <= 0)
	{
		cout << setw(50) << "\t";
		cout << "El Jugador con nombre: " << jugador.getName() << " ha muerto " << endl;
		Sleep(1000);
	}
	else if (enemigo.getLife() <= 0) {

		cout << setw(50) << "\t";
		cout << "El Enemigo con nombre: " << enemigo.getName() << " ha muerto " << endl;
		enemigo.setPosicionY(0);
		enemigo.setPosicionX(0);
		Sleep(1000);
	}

	cout << "\n" << endl;
	system("cls");

}