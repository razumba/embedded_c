/*
 * main.c
 *
 *  Created on: Oct 7, 2026
 *      Author: razue
 */

#include<stdio.h>
//------[ Type casting: implicit by compiler and explicit by Programmer]-------
int main()
{
	//unsigned char data = (unsigned char)(0x87 + 0xFF00); 	//unsigned char--> 1 & byte 0x87-1byte -> 4 byte  & 0xFF00 -2byte-> 4 Byte : due to compiler default
	long long int data = (long long int)(0x878787878787 + 0xFF00);
	float result = (float)80/3;
	printf("Data: 0x%llX & Result: %0.2f\n", data, result); //Add = 30

	return 0;
}

//------------------------------------[ main ]-----------------------------------
/*
#include<stdio.h>
// not this header as it is standerd library
// #include<math.h>
#include "math.h" 	 // doube quote "-"
*/

//--------------[ function calling from external file from Header file ]-----------
/*int main()
{
	printf("Add = %d\n", math_add(10,20)); //Add = 30
	printf("Add = %X\n", math_add(10,20)); //Add = 30
	printf("Sub = %d\n", math_sub(10,20));  // 	Add = -10
	printf("Sub = %X\n", math_sub(10,20));  // 	Add = -10
	printf("Mul = %lld\n", math_mul(10,20)); // Add = 200
	printf("Mul = %llX\n", math_mul(10,20)); // Add = 200
	printf("Div = %0.2f\n", math_div(10,20));  // 	Add = 0.500000
	return 0;
}*/



//---------------------------------------------------------
/*void func_add_3numbers(int a, int b, int c);

int main()
{
	int sum3Number;
	sum3Number = func_add_3numbers(11,12,13);
	printf("hello sum of three numbers = %d\n", sum3Number);
	int x=10;
	int y=10;
	int z=10;
	sum3Number= func_add_3numbers(x,y,z);
	printf("hello sum of three numbers = %d\n", sum3Number);
	return 0;
}

void func_add_3numbers(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	printf("hello sum of three numbers = %d\n", sum);
}
*/
//---------------------------------------------------------
/*
int func_add_3numbers(int a, int b, int c);
int main()
{
	int sum3Number;
	sum3Number = func_add_3numbers(11,12,13);
	printf("hello sum of three numbers = %d\n", sum3Number);

	int x=10;
	int y=10;
	int z=10;
	sum3Number= func_add_3numbers(x,y,z);
	printf("hello sum of three numbers = %d\n", sum3Number);
	return 0;
}
*/

