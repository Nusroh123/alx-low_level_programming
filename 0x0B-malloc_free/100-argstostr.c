#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	size_t total_len = 0;
	int i, index_num;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;
	result = (char *)malloc((total_len + 1) * sizeof(char));

	if (result != NULL)
	{
		index_num = 0;
		for (i = 0; i < ac; i++)
		{
			strcpy(result + index_num, av[i]);
			index_num += strlen(av[i]);
			result[index_num] = '\n';
			index_num++;
		}
		result[total_len] = '\0';
	}

	return (result);
}
