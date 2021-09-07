#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    
    unsigned new_x = x>>n;
    return (new_x & 0x1);
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
}

void test_get_bit(unsigned x,
        unsigned n,
        unsigned expected) {
    unsigned a = get_bit(x, n);
    if(a!=expected) {
        printf("get_bit(0x%08x,%u): 0x%08x, expected 0x%08x\n",x,n,a,expected);
    } else {
        printf("get_bit(0x%08x,%u): 0x%08x, correct\n",x,n,a);
    }
}

int main(){
    printf("\nTesting get_bit()\n\n");
    test_get_bit(0b1001110,0,0);
    test_get_bit(0b1001110,1,1);
    test_get_bit(0b1001110,5,0);
    test_get_bit(0b11011,3,1);
    test_get_bit(0b11011,2,0);
    test_get_bit(0b11011,9,0);
}