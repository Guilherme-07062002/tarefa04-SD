#include <stdio.h>
#include "pico/stdlib.h"
#include "globals.h"
#include "display.h"
#include "joystick.h"
#include "led.h"
#include "logic.h"
#include "matriz.h"

// Função para inicializar periféricos
void inicializa() {
    stdio_init_all();

    // Inicializa o joystick
    init_joystick();

    // Inicializa I2C e display OLED
    init_display();

    // Inicializa LEDs
    init_leds();

    // Inicializa a matriz de LEDs
    neopixel_init(LED_PIN, LED_COUNT);
}

/**
 * Comportamento principal do programa.
 * Lê o joystick, atualiza a opção selecionada e executa a operação lógica correspondente.
 */
void comportamento_principal(uint *countup, uint *countdown, uint *histerese) {
    uint16_t vry_value;
    bool opcao_alterada = joystick_read_axis(&vry_value, countup, countdown, histerese);

    joystick_button_pressed();

    // Exibe a opção atual no display apenas se ela foi alterada
    if (opcao_alterada) {
        print_texto((char *)opcoes[opcao_atual], 18, 3); // Centralizado no display        
    }
    
    // De acordo com a opção selecionada, realiza a ação correspondente
    execute_logic_operation(); // Executa a operação lógica correspondente

    // Atualiza o estado dos LEDs com base na opção selecionada
    if (catraca_aberta) {
        green_led_on(); // Liga o LED verde se a catraca estiver aberta
    } else {
        red_led_on(); // Liga o LED vermelho se a catraca estiver fechada
    }
}

// Função principal
int main() {
    inicializa();

    uint countup = 0;
    uint countdown = 0; // Inicializado como 0 para evitar comportamento inesperado
    uint histerese = 5; // Controle de histerese para suavizar mudanças rápidas

    while (1) {
        comportamento_principal(&countup, &countdown, &histerese);
        sleep_ms(100);
    }

    return 0;
}
