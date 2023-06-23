#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator:  string to be printed between the strings
 * @n: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *word;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(args, char*);
		if (word != NULL)
			printf("%s", word);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
