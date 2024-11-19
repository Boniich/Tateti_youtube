#include "SelectMark.h"

void SelectMark(Player& player, char playerSelection, Player& npc, char npcSelection) {
	player.mark = playerSelection;
	npc.mark = npcSelection;
}