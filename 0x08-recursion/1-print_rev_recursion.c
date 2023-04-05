#include "main.h"
/**
 * _print_rev_recursion - a function that prints a reversed string.
 * @s: the string to print.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
