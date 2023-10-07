#include "module_b.h"

int8_t AverageFourBytes(int8_t a, int8_t b, int8_t c, int8_t d)
{
    return (int8_t)( ( (int16_t)a + (int16_t)b + (int16_t)c + (int16_t)d ) / 4);
}
