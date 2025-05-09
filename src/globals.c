#include "globals.h"

unsigned int pos_y = 12;
unsigned int opcao_atual = 0;
const char *opcoes[] = {"0 - GR", "1 - HO", "2 - DI", "3 - PT"};
const unsigned int total_opcoes = 4;

bool program_running = false;
bool catraca_aberta = false;
bool GR = false;
bool HO = false;
bool DI = false;
bool PT = false;
bool joystick_button_was_pressed = false;
