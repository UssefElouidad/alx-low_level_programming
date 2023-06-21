#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name: the name to print.
 * @f: poniter to a function.
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
