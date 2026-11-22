/*
 * main.c
 *
 *  Created on: 22 Nov 2026
 *      Author: razue
 */


/*
 * main.c
 *
 *  Created on: 22 Nov 2026
 *      Author: razue
 */


#include <stdio.h>
#include <stdint.h>
#include "math_utils.h" // Include your custom header using double quotes

void wait_for_user_input(void);

int main(void)
{
    int32_t num1 = 10;
    int32_t num2 = 25;

    // 1. Using the macro from math_utils.h
    if (num2 > MAX_ALLOWED_VALUE) {
        printf("Error: Value exceeds %d\n", MAX_ALLOWED_VALUE);
        return 1;
    }

    // 2. Calling functions defined in math_utils.c
    int32_t sum = add_numbers(num1, num2);
    uint32_t evens = count_even_numbers(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    printf("Total even numbers between %d and %d: %u\n", num1, num2, evens);

    wait_for_user_input();

    return 0;
}


void wait_for_user_input(void){

/*
    // Keep the console window open until you press Enter
    printf("\nPress Enter to exit...");
    fflush(stdout); // Crucial for STM32CubeIDE / Eclipse console!
    getchar();
*/
	// Keep always: to halt Application
	while(getchar() != '\n') {
		// Just Read input Buffer, do nothing
	}
	printf("\nPress Enter to exit...");
 	//getchar();
	getchar();
}



