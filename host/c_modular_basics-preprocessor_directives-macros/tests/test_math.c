/*
 * math_utils.c
 *
 *  Created on: 22 Nov 2026
 *      Author: razue
 */


#include <stdio.h>
#include <assert.h>
#include "../math_utils.h"

void test_add_numbers(void)
{
    assert(add_numbers(10, 20) == 30);      // Normal positive numbers
    assert(add_numbers(-5, 5) == 0);        // Negative + positive
    assert(add_numbers(0, 0) == 0);         // Zeros
    printf("[PASS] test_add_numbers\n");
}

void test_count_even_numbers(void)
{
    assert(count_even_numbers(1, 10) == 5); // 2, 4, 6, 8, 10 -> 5 evens
    assert(count_even_numbers(2, 2) == 1);  // Single even number
    assert(count_even_numbers(3, 3) == 0);  // Single odd number
    assert(count_even_numbers(10, 1) == 0); // Invalid range (end < start)
    printf("[PASS] test_count_even_numbers\n");
}

int main(void)
{
    printf("Running Automated Unit Tests...\n\n");

    test_add_numbers();
    test_count_even_numbers();

    printf("\nAll unit tests passed successfully!\n");
    return 0; // Returning 0 tells CI/CD that everything passed (Green ✅)
}

