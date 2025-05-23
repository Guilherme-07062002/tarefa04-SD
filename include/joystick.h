#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <stdint.h>
#include <stdbool.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

// Definições de pinos e ADC para o joystick
#define VRY 27 // Pino do eixo Y do joystick
#define ADC_CHANNEL_1 1 // Canal ADC para o eixo Y
#define SW 22 // Define SW como o pino do botão do joystick

/**
 * Inicializa o joystick (configuração do ADC).
 */
void init_joystick();

/**
 * Lê o valor do eixo Y do joystick e atualiza a opção selecionada.
 * 
 * @param vry_value Ponteiro para armazenar o valor lido do eixo Y.
 * @param countup   Ponteiro para o contador de movimento para cima.
 * @param countdown Ponteiro para o contador de movimento para baixo.
 * @param histerese Ponteiro para o contador de histerese para suavizar mudanças rápidas.
 * 
 * @return true se a opção foi alterada, false caso contrário.
 */
bool joystick_read_axis(uint16_t *vry_value, uint *countup, uint *countdown, uint *histerese);

/**
 * Verifica se o botão do joystick foi pressionado.
 * Altera o estado do botão para true ou false dependendo do nível lógico.
 */
void joystick_button_pressed();

#endif // JOYSTICK_H
