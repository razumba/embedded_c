/*
 * math.h
 *
 *  Created on: Oct 7, 2026
 *      Author: razue
 */

/*macros: called 'include guards' = pre-processor directive*/
#ifndef MATH_H_
#define MATH_H_

/** exposed function prototype from math.c*/
int math_add(int a, int b);
int math_sub(int a, int b);
long long int math_mul(int a, int b);
float math_div(int a, int b);

#endif /* MATH_H_ */
