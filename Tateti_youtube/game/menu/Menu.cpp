#include "Menu.h"

void ShowMenu(char tableGame[3][3], Player player, Player npc) {
	bool endGame = false;
	int option;

	do
	{

		std::cout << "--- Menu --- " << std::endl;
		std::cout << "1- Jugar" << std::endl;
		std::cout << "2- Puntos" << std::endl;
		std::cout << "3- Salir" << std::endl;
		std::cout << "Introduce una opcion: ";

		if (std::cin >> option) {

			switch (option) {
			case 1:
				system("cls");
				PlayGame(tableGame, player, npc);
				break;
			case 2:
				system("cls");
				ShowPoints(player, npc);
				break;
			case 3:
				std::cout << "Adios! Nos vemos pronto" << std::endl;
				endGame = true;
				break;
			default:
				std::cout << "---------------------------------------" << std::endl;
				std::cout << "Option No valida. Vuelve a intentarlo" << std::endl;
				std::cout << "---------------------------------------" << std::endl;
				break;
			}

		}
		else {
			system("cls");
			std::cout << "---------------------------------------" << std::endl;
			std::cout << "Error: se ingreso un caracter no valido" << std::endl;
			std::cout << "---------------------------------------" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}



	} while (!endGame);
}