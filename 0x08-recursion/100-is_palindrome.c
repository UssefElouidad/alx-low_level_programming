#include"main.h"
/**
 * _strlen_rec - a function that calculate the length of a string.
 * @s: input string.
 * Return: the length of a string.
 */
int _strlen_rec(char *s)
{
	if ((*s == '\0'))
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}

/**
 * palindrome_checker - a recursive function that helps to check
 * if a string is palindrome.
 * @s: the string to check.
 * @start: the start of the string.
 * @end: the end of the string.
 * Return: 1 if palindrome 0 otherwise.
 */
int palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - a function that returns 1 if a string is palindrome.
 * @s: the string to check.
 * Return: 1 if palindrome 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_rec(s);

	return (palindrome_checker(s, 0, len - 1));
}
