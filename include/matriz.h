#ifndef MATRIZ_H
#define MATRIZ_H

#include "neopixel.h"

// Pino e número de LEDs da matriz de LEDs.
#define LED_PIN 7 // Pino de dados da matriz de LEDs
#define LED_COUNT 25 // Número de LEDs na matriz

// Funções para definir o respectivo led da matriz como vermelho ou verde de acordo com o valor do parâmetro.

/**
 * Define a cor do LED correspondente ao GR (Giro Reconhecido).
 * @param value Valor booleano que indica se o LED deve ser verde (true) ou vermelho (false).
 */
void set_GR(bool value);

/**
 * Define a cor do LED correspondente ao HO (Horário Permitido).
 * @param value Valor booleano que indica se o LED deve ser verde (true) ou vermelho (false).
 */
void set_HO(bool value);

/**
 * Define a cor do LED correspondente ao DI (Dia Permitido).
 * @param value Valor booleano que indica se o LED deve ser verde (true) ou vermelho (false).
 */
void set_DI(bool value);

/**
 * Define a cor do LED correspondente ao PT (Portaria).
 * @param value Valor booleano que indica se o LED deve ser verde (true) ou vermelho (false).
 */
void set_PT(bool value);    

/**
 * Função para inicializar o estado inicial da matriz de LEDs.
 * Esta função define todos os LEDs (GR, HO, DI e PT) como vermelhos.
 * É chamada no início do programa para garantir que todos os LEDs estejam na cor padrão.
 */
void set_initial_state();

/**
 * Atualiza o estado dos LEDs de acordo com a opção selecionada.
 * Esta função é chamada para atualizar os LEDs com base na opção atual do menu.
 */
void update_leds();

#endif // MATRIZ_H