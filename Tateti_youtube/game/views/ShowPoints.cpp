#include "ShowPoints.h"

void ShowPoints(Player player, Player npc) {

	std::cout << "--- Puntos --- " << std::endl;
	std::cout << "Si el jugador o npc gana una partida, suma 1 punto el que haya ganado" << std::endl;
	std::cout << "Si hay empate, nadie suma puntos" << std::endl;
	std::cout << "-------------- " << std::endl;


	std::cout << "Puntos del jugador: " << player.points << std::endl;
	std::cout << "Puntos del npc: " << npc.points << std::endl;
}