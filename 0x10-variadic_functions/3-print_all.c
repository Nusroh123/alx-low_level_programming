#include "variadic_functions.h"
/**
 * print_all -  print anything
 * @format: tha first char
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	const char *separator;
	char *str;

	i = 0;
	j = 0;
	va_start(ap, format);
	separator = "";
	while (format[j])
		j++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str != NULL)
					printf("%s%s", separator, str);
				if (str == NULL)
					printf("%s%s", separator, "(nil)");
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
