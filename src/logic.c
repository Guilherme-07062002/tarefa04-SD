#include "logic.h"
#include "globals.h"
#include "display.h"
#include "joystick.h"
#include "led.h"
#include "matriz.h"

void execute_logic_operation() {
    switch (opcao_atual) {
        case 0: // GR            
            // Se pressionar botão, muda o estado de GR
            if (joystick_button_was_pressed) GR = !GR; // Inverte o estado de GR
            break;
        case 1: // HO
            // Se pressionar botão, muda o estado de HO
            if (joystick_button_was_pressed) HO = !HO; // Inverte o estado de HO
            break;
        case 2: // DI
            // Se pressionar botão, muda o estado de DI
            if (joystick_button_was_pressed) DI = !DI; // Inverte o estado de DI
            break;
        case 3: // PT
            // Se pressionar botão, muda o estado de PT
            if (joystick_button_was_pressed) PT = !PT; // Inverte o estado de PT
            break;
    }

    update_leds(); // Atualiza os LEDs de acordo com a opção selecionada
    joystick_button_was_pressed = false; // Sempre reseta o estado após a leitura
}
