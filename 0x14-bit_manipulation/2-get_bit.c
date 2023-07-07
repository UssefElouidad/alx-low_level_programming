#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number to have the value from.
 * @index: the index of the bit.
 * Return: the value of the bit or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
