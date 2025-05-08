#include "logic.h"
#include "globals.h"
#include "display.h"
#include "joystick.h"
#include "led.h"
#include "matriz.h"
#include <stdio.h> // Include for printf

void execute_logic_operation() {
    switch (opcao_atual) {
        case 0: // GR
            printf("Botão do joystick pressionado: %d\n", joystick_button_was_pressed); // Debug: imprime o estado do botão
            printf("Opção atual: %d\n", opcao_atual); // Debug: imprime a opção atual
            // Se pressionar botão, muda o estado de GR
            if (joystick_button_was_pressed) {
                GR = !GR; // Inverte o estado de GR
                set_GR(GR); // Atualiza o LED correspondente
            }
            
            joystick_button_was_pressed = false;
            break;
        case 1: // HO
            // Se pressionar botão, muda o estado de HO
            if (joystick_button_was_pressed) {
                HO = !HO; // Inverte o estado de HO
                set_HO(HO); // Atualiza o LED correspondente
            }
            break;
        case 2: // DI
            // Se pressionar botão, muda o estado de DI
            if (joystick_button_was_pressed) {
                DI = !DI; // Inverte o estado de DI
                set_DI(DI); // Atualiza o LED correspondente
            }
            break;
        case 3: // PT
            // Se pressionar botão, muda o estado de PT
            if (joystick_button_was_pressed) {
                PT = !PT; // Inverte o estado de PT
                set_PT(PT); // Atualiza o LED correspondente
            }
            break;
    }
}
