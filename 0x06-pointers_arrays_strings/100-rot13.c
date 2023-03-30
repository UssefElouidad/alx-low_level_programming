#include "main.h"
#include <stdio.h>
/**
 * rot13 - fonction that rotate by 13.
 * @s: pointer to string .
 * Return: *s.
 */
char *rot13(char *s)
{
	int i, j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWYZabcdefghijklmnopqrstuvwyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = drot[j];
				break;
			}
		}
	}
	return (s);
}
