#ifndef __NEOPIXEL_INC
#define __NEOPIXEL_INC

#include <stdint.h>
#include <stdlib.h>
#include <pico/stdlib.h>
#include <hardware/pio.h>
#include "matriz.h"

// Definição de pixel GRB
typedef struct {
  uint8_t G, R, B; // Três valores de 8-bits compõem um pixel.
} npLED_t;

// Inicializa a máquina PIO para controle da matriz de LEDs.
void neopixel_init(uint pin, uint amount);

// Atribui uma cor RGB a um LED.
void neopixel_set_led(const uint index, const uint8_t r, const uint8_t g, const uint8_t b);

// Limpa o buffer de pixels.
void neopixel_clear();

// Escreve os dados do buffer nos LEDs.
void neopixel_write();

#endif