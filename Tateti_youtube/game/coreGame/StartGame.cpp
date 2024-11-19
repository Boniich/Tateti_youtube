#include "StartGame.h"

void StartGame() {
	SetConsoleOutputCP(CP_UTF8);

	Player player;
	Player npc;

	char tableGame[3][3] = { {' ',' ',' '},
							{' ',' ',' '},
							{' ',' ',' '} };


	SelectMarkView(player, npc);


	std::cout << "La marca del jugador es: " << player.mark << std::endl;
	std::cout << "La marca del npc es: " << npc.mark << std::endl;

	ShowMenu(tableGame, player, npc);
}