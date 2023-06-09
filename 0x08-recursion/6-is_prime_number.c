#include"main.h"
/**
 * prime_number - a function that helps finding the prime numbers.
 * @n: number to check.
 * @div: the divisor to check with.
 * Return: 1 if prime 0 if not.
 */
int prime_number(int n, int div)
{
	if (n < 2)
		return (0);

	if (div * div > n)
		return (1);

	if (n % div == 0)
		return (0);

	return (prime_number(n, div + 1));
}
/**
 * is_prime_number - a function that tells if a number is a prime or not
 * @n: is the integer to test.
 * Return: 1 if is a prime number 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
