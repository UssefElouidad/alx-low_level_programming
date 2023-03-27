#include "main.h"
/**
 * puts2 - a function thet prints every other character of a string.
 * @str: character we will use.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
