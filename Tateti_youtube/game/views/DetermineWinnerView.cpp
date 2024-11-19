#include "DetermineWinnerView.h"

bool determinePlayerWin(char tableGame[3][3], Player player) {
	char marca = getWinner(tableGame);

	if (marca == player.mark) {
		return true;
	}

	return false;
}
bool determineNpcWin(char tableGame[3][3], Player npc) {
	char marca = getWinner(tableGame);

	if (marca == npc.mark) {
		return true;
	}

	return false;
}
bool determineDraw(char tableGame[3][3], bool& gameOver, bool& isThereWinner) {
	if (countFreeSpaces(tableGame) == 0 && isThereWinner == false) {
		std::cout << "Es un empate" << std::endl;
		gameOver = true;
		return true;
	}
	return false;
}
void showWinner(bool& gameOver, bool& isThereWinner, const char* labelWinner) {
	std::cout << labelWinner << std::endl;
	isThereWinner = true;
	gameOver = true;
}