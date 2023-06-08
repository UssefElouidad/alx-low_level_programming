#include "main.h"
/**
 * _pow_recursion - a function that returns the power of value x
 * raised to the power of y.
 * @x : the number to calculate.
 * @y : the power value.
 * Return: the final value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
