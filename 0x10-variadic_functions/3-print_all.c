#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  a function that prints anything.
 * @format: is a list of types of arguments passed to the function.
 * Return: Always0.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(list, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(list, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(list, double));
			break;
			case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	va_end(list);
	printf("\n");
}
