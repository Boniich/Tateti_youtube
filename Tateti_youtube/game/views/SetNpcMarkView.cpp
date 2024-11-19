#include "SetNpcMarkView.h"

void SetNpcMarkView(char tableGame[3][3], const char mark) {
	char* seleccion = SetNpcMark(tableGame, mark);
	std::cout << "El NPC ha seleccionado el espacio: " << seleccion;
}