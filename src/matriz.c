#include "matriz.h"
#include "globals.h"

/**
 * Os respectivos LEDs da matriz para cada opção de acordo com a documentação da placa Bitdoglab são:
 * - LED 4: GR (Giro Reconhecido)
 * - LED 3: HO (Horário Permitido)
 * - LED 2: DI (Dia Permitido)
 * - LED 1: PT (Portaria)
 */

void set_GR(bool value){
    if (value) {
        neopixel_set_led(4, 0, 255, 0); // Verde
    } else {
        neopixel_set_led(4, 255, 0, 0); // Vermelho
    }
}

void set_HO(bool value){
    if (value) {
        neopixel_set_led(3, 0, 255, 0);
    } else {
        neopixel_set_led(3, 255, 0, 0);
    }
}

void set_DI(bool value){
    if (value) {
        neopixel_set_led(2, 0, 255, 0);
    } else {
        neopixel_set_led(2, 255, 0, 0);
    }
}

void set_PT(bool value){
    if (value) {
        neopixel_set_led(1, 0, 255, 0);
    } else {
        neopixel_set_led(1, 255, 0, 0);
    }
}

/**
 * Inicializa com todos os LEDs respectivos a cada opção com a cor vermelha.
 */
void set_initial_state(){
    neopixel_clear(); // Limpa o buffer de LEDs
    neopixel_set_led(4, 255, 0, 0); // GR (Giro Reconhecido) - Vermelho
    neopixel_set_led(3, 255, 0, 0); // HO (Horário Permitido) - Vermelho
    neopixel_set_led(2, 255, 0, 0); // DI (Dia Permitido) - Vermelho
    neopixel_set_led(1, 255, 0, 0); // PT (Portaria) - Vermelho
    neopixel_write(); // Atualiza os LEDs com os dados do buffer
}