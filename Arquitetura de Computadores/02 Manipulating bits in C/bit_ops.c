#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    
    x = x>>n;
    return (x & 0x1);
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    /* 
    The left part of the main or(|) forces the nth value of *x to be equal to v and the right part of the main or(|)
    get the other bits from the number. On the right part of the main or(|), first we deny the 1<<n getting that way
    something like ..11101111..., whereas 0 is in the nth position. Afterwards we use & to get every bit on *x, except
    the nth bit - we already have it on the left part of the main or(|), that way when we get together the two parts
    with the main or(|), it gives back the correct wanted number.
    */
    unsigned mask = v<<n;
    *x = (mask & (*x | (1<<n))) | (*x & ~(1<<n));
    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    unsigned mask = 0x1<<n; 
    *x = *x ^ mask;
    
}
