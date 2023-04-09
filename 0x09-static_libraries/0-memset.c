#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @n: int first bytes.
 * @s: a pointer.
 * @b: a constant byte.
 * Return: the pointer to  memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
