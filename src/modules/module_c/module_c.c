#include "module_c.h"

int8_t AverageFiveBytes(int8_t a, int8_t b, int8_t c, int8_t d, int8_t e)
{
    return (int8_t)( ( (int16_t)a + (int16_t)b + (int16_t)c + (int16_t)d + (int16_t)e) / 5);
}
