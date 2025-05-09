#ifndef LED_H
#define LED_H

#include <stdbool.h>

// Pino do LED azul
#define BLUE_LED_PIN 12

// Pino do LED vermelho
#define RED_LED_PIN 13

// Pino do LED verde
#define GREEN_LED_PIN 11

/**
 * Inicializa os LEDs configurando os pinos como saída.
 */
void init_leds();

/**
 * Liga o LED vermelho e desliga o LED verde.
 */
void red_led_on();

/**
 * Verifica se o LED vermelho está ligado.
 * 
 * @return true se o LED vermelho estiver ligado, false caso contrário.
 */
extern bool red_led_is_on();

/**
 * Liga o LED verde e desliga o LED vermelho.
 */
void green_led_on();

/**
 * Verifica se o LED verde está ligado.
 *
 * @return true se o LED verde estiver ligado, false caso contrário.
 */
extern bool green_led_is_on();

#endif // LED_H
