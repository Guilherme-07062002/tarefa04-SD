#include "globals.h"

// Indica se o programa está em execução
bool program_running = false;

// Posição atual no eixo Y para controle de menus no display
unsigned int pos_y = 12;

// Índice da opção atualmente selecionada no menu
unsigned int opcao_atual = 0;

/**
 * Lista de opções disponíveis no menu.
 * Cada opção é representada por uma string que descreve sua função.
 * 0 - GR: (Giro Reconhecido): Permissão automática de giro da catraca, ativada quando o usuário apresenta um tipo de identificação válida 
 * (biometria, TAG, reconhecimento facial, dentre outros). Valores possíveis: 1 (permitido) ou 0 (negado).
 * 1 - HO: (Horário Permitido): A catraca só funciona automaticamente entre 06:00 e 23:00. Valores possíveis: 1 (horário permitido) 
 * ou 0 (fora do horário).
 * 2 - DI: (Dia Permitido): Verifica se é um dia letivo. Valores possíveis: 1 (permitido) ou 0 (fim de semana ou feriado).
 * 3 - PT: (Portaria): Liberação manual feita pelo porteiro. Entrada ativa em nível baixo: 0 = liberação autorizada, 1 = sem autorização 
 * (padrão do sistema). Importante: A liberação manual é válida a qualquer hora e em qualquer dia, independentemente dos valores de GR, HO e DI.
 * */
const char *opcoes[] = {"0 - GR", "1 - HO", "2 - DI", "3 - PT"};

// Total de opções disponíveis no menu
const unsigned int total_opcoes = 4;
