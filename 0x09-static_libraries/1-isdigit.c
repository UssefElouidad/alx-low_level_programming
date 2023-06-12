#include "main.h"
/**
 * _isdigit - checks for a digit.
 *
 * @c: is the element to check.
 *
 * return: always 0.
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

