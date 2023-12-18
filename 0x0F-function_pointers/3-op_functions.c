#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - returns the sum of the two numbers inputed.
 * @a: The first number inputed.
 * @b: The second number inputed.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}


/**
 * op_sub - returns the difference of two numbers input.
 * @a: The first number inputed.
 * @b: The second number inputed.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}


/**
 * op_mul - returns the product of the two numbers inputed.
 * @a: The first number input.
 * @b: The second number input.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}


/**
 * op_div - returns the division of the two numbers.
 * @a: The first number input.
 * @b: The second number input.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	int divi = a / b;

	return (divi);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	int modu = a % b;

	return (modu);
}

