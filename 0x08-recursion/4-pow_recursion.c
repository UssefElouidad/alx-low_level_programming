# include "main.h"
/**
 * _pow_recursion - a function that returns
 * the value of x raised to the poxer of y.
 * @x: a value.
 * @y: the power of the value.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
