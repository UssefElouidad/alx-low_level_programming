#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers.
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}
	va_end(list);
	printf("\n");
}
