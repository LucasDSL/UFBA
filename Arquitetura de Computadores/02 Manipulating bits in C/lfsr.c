#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
  // Getting the required bits
  unsigned bit_0 = 0x1 & *reg;
  unsigned bit_2 = 0x1 & (*reg>>2);
  unsigned bit_3 = 0x1 & (*reg>>3);
  unsigned bit_5 = 0x1 & (*reg>>5);

  // Getting the output of the xor gates
  unsigned first_xor = bit_0 ^ bit_2;
  unsigned second_xor = first_xor ^ bit_3;
  unsigned third_xor = second_xor ^ bit_5;

  //Shifting one the the right
  *reg = *reg>>1;
  
  // Setting the leftmost bit to the value of the third_xor output
  unsigned mask = third_xor<<15;
  *reg = (mask & (*reg | (1<<15))) | (~mask & (*reg & ~(1<<15)));
}