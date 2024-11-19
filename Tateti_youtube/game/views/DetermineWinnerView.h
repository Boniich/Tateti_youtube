#pragma once
#include <iostream>
#include "../models/DetermineWinner.h"
#include "../models/Player.h"

bool determinePlayerWin(char tableGame[3][3], Player player);
bool determineNpcWin(char tableGame[3][3], Player npc);
bool determineDraw(char tableGame[3][3], bool& gameOver, bool& isThereWinner);
void showWinner(bool& gameOver, bool& isThereWinner, const char* labelWinner);