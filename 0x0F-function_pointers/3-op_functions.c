#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo of two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of modulo operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
