#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns addition of two numbers
 * @a: first number
 * @b: second number
 * Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
