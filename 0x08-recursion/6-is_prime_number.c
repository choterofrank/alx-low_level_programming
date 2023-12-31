#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - finds if a number is a primenumber or not
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return  (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates is a numb is prime recu
 * @n: numb to check
 * @i: no of time to iterate
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
