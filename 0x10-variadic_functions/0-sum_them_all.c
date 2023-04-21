#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - a function that return the sum of all its parameters.
 * @n: parameter of the function.
 * Return: 0 if no arg sum otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(l, n);

	for (i = 0; i < n; i++)
		sum += va_arg(l, int);
	return (sum);
}
