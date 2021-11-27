#include<stdlib.h>
#include<stdio.h>
int main(){
    // Left shift - Fill with zeros (x << n)
    unsigned char i = 0x22;
    printf("Left Shift: %x\n", i<<3);

    // Right shift - Logical Shifts :
    // unsigned values - fill left with zeroes.
    printf("Right Shift - Logical: %x\n", i>>2);
    // Arithmetic - signed values - replicate most significant on left
    printf("Right Shift - Arithmetic: %x\n", (signed char)i>>2);
}