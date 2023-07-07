#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary format.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int f = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m != 0)
	{
		if ((n & m) != 0)
		{
			_putchar('1');
			f = 1;
		}
		else if (f)
			_putchar('0');
		m >>= 1;
	}
}
