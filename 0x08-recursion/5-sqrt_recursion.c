#include "main.h"
#include<stdio.h>
int num(int n, int m);
/**
 * num -a function which helps us find the natural sauar root.
 * @n: number to calculate the sqare root for.
 * @m: the value of square root.
 * Return: the natural value of root.
 */
int num(int n, int m)
{
	if (n * n == m)
		return (n);
	if (n == m)
		return (-1);
	return (1 * num(n + 1, m));
}

/**
 * sqrt_recursion - a function that returns the natural square root of a number
 * @n: the value to calculate sqrt.
 * Return: natural saquare n.
 */
int _sqrt_recursion(int n)
{
	if  (n < 0)
		return (-1);
	return (num(1, n));
}
