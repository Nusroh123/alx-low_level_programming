#include "main.h"

/**
 * pre_prime - check if a number is prime
 * @n: int param
 * @i: iterator
 * Return: int
 */
int pre_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (pre_prime(n, i - 1));
}

/**
 * is_prime_number - find a prime number
 * @n: int paraeter
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pre_prime(n, n - 1));
}
