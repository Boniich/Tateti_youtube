#include "ShowTableGame.h"

void ShowTableGame(char tableGame[3][3]) {

	char letters[3] = { 'A','B','C' };

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "\t  ";

	for (int i = 1; i <= 3; i++) {
		std::cout << i << " ";
	}

	std::cout << "" << std::endl;

	for (int i = 0; i < 3; i++) {

		if (i == 1 || i == 2) {
			std::cout << "\t " << u8"\u251C" << u8"\u2500" << u8"\u253C" << u8"\u2500" << u8"\u253C" << u8"\u2500" << u8"\u2524" << std::endl;
		}
		else {
			std::cout << "\t " << u8"\u250C" << u8"\u2500" << u8"\u252C" << u8"\u2500" << u8"\u252C" << u8"\u2500" << u8"\u2510" << std::endl;
		}

		std::cout << "\t" << letters[i];
		for (int e = 0; e < 3; e++) {
			std::cout << u8"\u2502";
			std::cout << tableGame[i][e];

			if (e == 3 - 1) std::cout << u8"\u2502";
		}

		std::cout << "" << std::endl;
	}

	std::cout << "\t " << u8"\u2514" << u8"\u2500" << u8"\u2534" << u8"\u2500" << u8"\u2534" << u8"\u2500" << u8"\u2518" << std::endl;
}