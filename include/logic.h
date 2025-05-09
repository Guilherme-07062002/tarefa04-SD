#ifndef LOGIC_H
#define LOGIC_H

/**
 * Verificar o estado de cada entrada GR, HO, DI e PT para saber se a catraca estará aberta ou fechada.
 * A lógica utilizada deve respeitar a expressão: !PT || DI && HO && GR.
 * Se a expressão for verdadeira, a catraca estará aberta.
 */
void verifica_estado_catraca();

/**
 * Executa a operação lógica correspondente à opção selecionada no joystick.
 * Altera o estado de GR, HO, DI ou PT dependendo da opção atual.
 */
void execute_logic_operation();

#endif // LOGIC_H