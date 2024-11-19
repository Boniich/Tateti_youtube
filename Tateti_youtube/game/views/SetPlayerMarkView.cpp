#include "SetPlayerMarkView.h"

void SetPlayerMarkView(char tableGame[3][3], const char mark) {
	int seleccion;
	bool exit = false;
	int amountSpaceFree = 0;
	char(*ptr)[2] = ShowOptionsToSetPlayerMark(tableGame, amountSpaceFree);
	static char positionToSetMark[2];

	do {
		std::cout << "Seleciona una opcion: ";

		if (std::cin >> seleccion) {

			if (seleccion >= 1 && seleccion <= amountSpaceFree) {
				std::cout << "La opcion selecciona es: " << ptr[seleccion - 1][0] << ptr[seleccion - 1][1]<<std::endl;
				positionToSetMark[0] = ptr[seleccion - 1][0];
				positionToSetMark[1] = ptr[seleccion - 1][1];
				exit = true;

			}else {
				std::cout << "---------------------------------------" << std::endl;
				std::cout << "La opcion ingresada no es valida" << std::endl;
				std::cout << "---------------------------------------" << std::endl;
			}


		}
		else {
			std::cout << "---------------------------------------" << std::endl;
			std::cout << "Error: se ingreso un caracter no valido" << std::endl;
			std::cout << "---------------------------------------" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}


	} while (!exit);

	SetPlayerMark(tableGame, positionToSetMark, mark);
}
