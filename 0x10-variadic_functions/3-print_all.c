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
	int num;
	char c;
	char *str;
	float f;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
				c = (char)va_arg(ap, int);
				printf("%c", c);
				break;
			}
			case 'i':
			{
			num = va_arg(ap, int);
			printf("%d", num);
			break;
			}
			case 'f':
			{
			f = va_arg(ap, double);
			printf("%f", f);
			break;
			}
			case 's':
			{
			str = va_arg(ap, char*);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			}
			break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}

		i++;
	}
	va_end(ap);

	printf("\n");

}
