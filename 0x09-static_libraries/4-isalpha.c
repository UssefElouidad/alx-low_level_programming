#include"main.h"
/**
 * _isalpha: checks for alphabetic characters.
 * if the input is character it  showes: 1
 * otherwise it shows 0
 * @c: the character in ASCII code
 * Return: 1 for alphabetic charracter 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
