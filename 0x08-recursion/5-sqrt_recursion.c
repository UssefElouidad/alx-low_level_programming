#include"main.h"
int sqrt_define(int n, int i);
/**
 * sqrt_define - a function that helps in finding the sqr root number.
 * @i : iterate number.
 * @n : the number in question of sqr root.
 * Return: the result
 */
int sqrt_define(int n, int i)
{
	int mid = i * i;

	if (mid > n)
		return (-1);

	else if (mid == n)
		return (i);

	return (sqrt_define(n, i + 1));
}

/**
 * _sqrt_recursion - a fuction that returns the natural squar root of a number.
 * @n : the number to calculate score for .
 * Return: the natural square root or -1 if dosent exist.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_define(n, 1));
}
