#include "neopixel.h"
#include "ws2818b.pio.h"

// Variáveis para uso da máquina PIO.
static npLED_t *leds;
static uint led_count;
static PIO np_pio;
static uint np_sm;

void neopixel_init(uint pin, uint amount) {
  led_count = amount;
  leds = (npLED_t *)calloc(led_count, sizeof(npLED_t));

  // Cria programa PIO.
  uint offset = pio_add_program(pio0, &ws2818b_program);
  np_pio = pio0;

  // Toma posse de uma máquina PIO.
  np_sm = pio_claim_unused_sm(np_pio, false);
  if (np_sm < 0) {
    np_pio = pio1;
    np_sm = pio_claim_unused_sm(np_pio, true); // Se nenhuma máquina estiver livre, panic!
  }

  // Inicia programa na máquina PIO obtida.
  ws2818b_program_init(np_pio, np_sm, offset, pin, 800000.f);

  // Limpa buffer de pixels.
  for (uint i = 0; i < led_count; ++i) {
    leds[i].R = 0;
    leds[i].G = 0;
    leds[i].B = 0;
  }
  
  set_initial_state(); // Inicializa o estado inicial da matriz de LEDs.
}

void neopixel_set_led(const uint index, const uint8_t r, const uint8_t g, const uint8_t b) {
  if (index < led_count) { // Verifica se o índice é válido
    leds[index].R = r;
    leds[index].G = g;
    leds[index].B = b;
  }
}

void neopixel_clear() {
  for (uint i = 0; i < led_count; ++i)
    neopixel_set_led(i, 0, 0, 0);
}

void neopixel_write() {
  // Escreve cada dado de 8-bits dos pixels em sequência no buffer da máquina PIO.
  for (uint i = 0; i < led_count; ++i) {
    pio_sm_put_blocking(np_pio, np_sm, leds[i].G);
    pio_sm_put_blocking(np_pio, np_sm, leds[i].R);
    pio_sm_put_blocking(np_pio, np_sm, leds[i].B);
  }
  sleep_us(100); // Espera 100us, sinal de RESET do datasheet.
}