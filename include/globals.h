#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * Indica se um programa está em execução.
 */
extern bool program_running;

/**
 * Posição atual no eixo Y para controle de menus.
 */
extern unsigned int pos_y;

/**
 * Índice da opção atualmente selecionada no menu.
 */
extern unsigned int opcao_atual;

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
extern const char *opcoes[];

/**
 * Total de opções disponíveis no menu.
 */
extern const unsigned int total_opcoes;

/**
 * Indica se a catraca está aberta ou fechada.
 */
extern bool catraca_aberta;

/**
 * 0 - GR: (Giro Reconhecido): Permissão automática de giro da catraca, ativada quando o usuário apresenta um tipo de identificação válida 
 * (biometria, TAG, reconhecimento facial, dentre outros). Valores possíveis: 1 (permitido) ou 0 (negado).
 */
extern bool GR;

/**
 * 1 - HO: (Horário Permitido): A catraca só funciona automaticamente entre 06:00 e 23:00. Valores possíveis: 1 (horário permitido) 
 * ou 0 (fora do horário).
 */
extern bool HO;

/**
 * 2 - DI: (Dia Permitido): Verifica se é um dia letivo. Valores possíveis: 1 (permitido) ou 0 (fim de semana ou feriado).
 */
extern bool DI;

/**
 * 3 - PT: (Portaria): Liberação manual feita pelo porteiro. Entrada ativa em nível baixo: 0 = liberação autorizada, 1 = sem autorização 
 * (padrão do sistema). Importante: A liberação manual é válida a qualquer hora e em qualquer dia, independentemente dos valores de GR, HO e DI.
 */
extern bool PT;

extern bool joystick_button_was_pressed; // Variável para armazenar o estado do botão do joystick

#endif // GLOBALS_H