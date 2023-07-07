#include"main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to the number.
 * @index: the index of the bit.
 * Return: 1 if it worked, 0 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (-1);
}
