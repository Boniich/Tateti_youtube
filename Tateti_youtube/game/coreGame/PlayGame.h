#pragma once
#include "../views/ShowTableGame.h"
#include "../models/Player.h"
#include "../views/ShowOptionToPlayerToSetMarkView.h"
#include "../views/SetPlayerMarkView.h"
#include "../views/SetNpcMarkView.h"
#include "../views/SelectMarkView.h"
#include "../views/DetermineWinnerView.h"
#include "../models/CleanTableGame.h"

void PlayGame(char tableGame[3][3], Player& player, Player& npc);