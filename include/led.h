#ifndef LED_H
#define LED_H

#include <stdbool.h>

// Definições de pinos e módulos
#define BLUE_LED_PIN 12
#define RED_LED_PIN 13
#define GREEN_LED_PIN 11

// Função de inicialização do LED
void init_leds();

// Funções para controlar o LED vermelho
void red_led_on();;

extern bool red_led_is_on(); // Verifica se o LED vermelho está ligado

// Funções para controlar o LED verde
void green_led_on();

extern bool green_led_is_on(); // Verifica se o LED verde está ligado

#endif // LED_H
