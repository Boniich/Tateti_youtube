#include "ShowOptionToPlayerToSetMarkView.h"

void ShowOptionsToSetPlayerMarkView(char tableGame[3][3]) {
	int amountSpaceFree = 0;
	char(*ptr)[2] = ShowOptionsToSetPlayerMark(tableGame, amountSpaceFree);

	std::cout << " ---- Lugares para poner tu marca ----" << std::endl;

	for (int i = 0; i < amountSpaceFree; i++) {
		std::cout << (i + 1) << "- ";
		for (int e = 0; e < 2; e++) {
			std::cout << ptr[i][e];
		}
		std::cout << "" << std::endl;
	}
	std::cout << "" << std::endl;
}