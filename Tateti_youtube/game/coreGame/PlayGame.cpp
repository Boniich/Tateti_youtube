#include "PlayGame.h"

void PlayGame(char tableGame[3][3], Player& player, Player& npc) {

	bool gameOver = false;
	bool isThereWinner = false;

	do {
		ShowTableGame(tableGame);

		ShowOptionsToSetPlayerMarkView(tableGame);

		SetPlayerMarkView(tableGame, player.mark);

		ShowTableGame(tableGame);

		if (determinePlayerWin(tableGame, player)) {
			showWinner(gameOver, isThereWinner, "El jugador es el ganador!");
			player.points++;
		}
		else {
			if (!determineDraw(tableGame, gameOver, isThereWinner)) {
				SetNpcMarkView(tableGame, npc.mark);

				if (determineNpcWin(tableGame, npc)) {
					ShowTableGame(tableGame);
					showWinner(gameOver, isThereWinner, "El NPC es el ganador!");
					npc.points++;
				}
			}
		}

	} while (!gameOver);

	CleanTableGame(tableGame);

}