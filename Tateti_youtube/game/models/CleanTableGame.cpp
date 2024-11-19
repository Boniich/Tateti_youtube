#include "CleanTableGame.h"


void CleanTableGame(char tableGame[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int e = 0; e < 3; e++) {
			tableGame[i][e] = ' ';
		}
	}
}