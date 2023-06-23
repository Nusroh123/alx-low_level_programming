#include "variadic_functions.h"
/**
 * print_all -  print anything
 * @format: tha first char
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	const char *separator;
	char *str;

	if (format == NULL)
		return;

	i = 0;
	va_start(ap, format);
	separator = "";
	while (format[i])
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
				printf("%s%s", separator, (str != NULL) ? str : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(ap);
	printf("\nseyi");
}
