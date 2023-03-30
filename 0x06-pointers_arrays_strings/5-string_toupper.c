#include "main.h"
/**
 * string_toupper - change all lowercqse of a string to upercase.
 * @str: analized string.
 * Return: string with uupercase letters.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
