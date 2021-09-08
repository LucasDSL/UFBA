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
    /* The left part of the main or(|) forces the nth value of *x to be equal to v and the 
    right part of the main or(|) get the other bits from the number, since it makes every bit equals to 1 on the mask, except the nth bit, wich can be equal to 1 and flips to 0, wich also denies it from being changed from the value of the left part of the main or(|), giving back the correct answer.
    */
    unsigned mask = v<<n;
    *x = (mask & (*x | (1<<n))) | (~mask & (*x & ~(1<<n)));
    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    unsigned mask = 0x1<<n; 
    *x = *x ^ mask;
    
}
