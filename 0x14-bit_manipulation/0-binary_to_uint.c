#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that
 * converts a binary number to an unsigned int.
 * @b: is a pointer to a binary number.
 * Return: the converted number or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
			result = (result * 2) + (*b - '0');
	}
	return (result);
}
