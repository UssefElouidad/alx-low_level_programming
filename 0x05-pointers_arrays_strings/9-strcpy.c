#include "main.h"
/**
 * _strcpy - fonction that copy a string.
 * @dest: destination of th value.
 * @src: source of value.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	
	*(dest + l) = '\0';
	return (dest);
}
