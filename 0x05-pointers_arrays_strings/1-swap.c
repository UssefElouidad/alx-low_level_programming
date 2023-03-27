#include "main.h"
/**
 * swap_int - is a function that swaps the values of two int.
 *
 * @a: first integer.
 * @b: second integer.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
