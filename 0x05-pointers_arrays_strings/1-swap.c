#include "main.h"

/**
 * swap_int - Swaps the values of two integer
 * @a: First value
 * @b: Second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
