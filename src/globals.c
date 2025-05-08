#include "globals.h"

// Indica se o programa está em execução
bool program_running = false;

// Posição atual no eixo Y para controle de menus no display
unsigned int pos_y = 12;

// Índice da opção atualmente selecionada no menu
unsigned int opcao_atual = 0;

const char *opcoes[] = {"0 - GR", "1 - HO", "2 - DI", "3 - PT"};

// Total de opções disponíveis no menu
const unsigned int total_opcoes = 4;

// Indica se a catraca está aberta ou fechada
bool catraca_aberta = false;

bool GR = false;
bool HO = false;
bool DI = false;
bool PT = false;

bool joystick_button_was_pressed = false; // Variável para armazenar o estado do botão do joystick
