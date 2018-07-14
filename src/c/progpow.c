#include <stdint.h>

uint64_t hello(const uint8_t a[4], uint8_t b[4]) {
    uint64_t r = 0;
    for (int i=0;i<4;i++) {
        b[i] = a[i];
        r+=b[i];
    }
    return r;
}