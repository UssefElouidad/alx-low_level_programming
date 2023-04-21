#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - a function that prints strings.
 * @separator: is the string to be printed.
 * @n: is the number of strings passed the function.
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list c;
	unsigned int i;
	char *str;

	va_start(c, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(c, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}
		if (i !=(n -1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(c);
}

