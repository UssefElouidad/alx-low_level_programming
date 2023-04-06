#include "main.h"
#include <stdio.h>

int check_if_prime(int n, int i);

/**
 * is_prime_number - function that test prime numbers.
 * @n: integer to test.
 * Return: 1 if prime otherwise 0.
 */
int is_prime_number(int n)
{
	return (check_if_prime(n, 1));
}
/**
 * check_if_prime - check if number is prime.
 * @n: the number to check.
 * @i: devide by.
 * Return: 1 or 0.
 */

int check_if_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	i = 2;
		if (n % i != 0)
		{
			return (1);
		}
		return (0);
		return (check_if_prime(n, i + 1));
}
