/*
 * math_utils.c
 *
 *  Created on: 22 Nov 2026
 *      Author: razue
 */


#include "math_utils.h"

int32_t add_numbers(int32_t a, int32_t b)
{
    return a + b;
}

uint32_t count_even_numbers(int32_t start, int32_t end)
{
    uint32_t count = 0;

    if (end < start) {
        return 0; // Return 0 if range is invalid
    }

    while (start <= end) {
        if ((start % 2) == 0) {
            count++;
        }
        start++;
    }

    return count;
}
