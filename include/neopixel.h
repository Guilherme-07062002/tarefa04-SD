#ifndef __NEOPIXEL_INC
#define __NEOPIXEL_INC

#include <stdint.h>
#include <stdlib.h>
#include <pico/stdlib.h>
#include <hardware/pio.h>
#include "matriz.h"

/**
 * Definição de pixel GRB (ordem: Verde, Vermelho, Azul)
 * */
typedef struct {
  uint8_t G, R, B; // Três valores de 8-bits compõem um pixel na ordem GRB.
} npLED_t;

/**
 * Inicializa a máquina PIO para controle da matriz de LEDs.
 * @param pin O pino ao qual a matriz de LEDs está conectada.
 * @param amount A quantidade de LEDs na matriz.
 */
void neopixel_init(uint pin, uint amount);

/** Define a cor de um LED específico na matriz de LEDs.
 * @param index O índice do LED a ser definido.
 * @param r O valor vermelho (0-255).
 * @param g O valor verde (0-255).
 * @param b O valor azul (0-255).
 */
void neopixel_set_led(const uint index, const uint8_t r, const uint8_t g, const uint8_t b);

/**
 * Limpa o buffer de pixels.
 */
void neopixel_clear();

/**
 * Escreve os dados do buffer nos LEDs.
 */
void neopixel_write();

#endif