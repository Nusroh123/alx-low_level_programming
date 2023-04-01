#include "main.h"

/**
 * reverse_array - reverses the content of an arry of integer
 * @a: pointer
 * @n: number of an array's element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
