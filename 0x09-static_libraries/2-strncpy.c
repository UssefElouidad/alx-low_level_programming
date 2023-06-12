#include "main.h"
/**
 * _strncpy - work exactly like strncpy.
 * @dest: string of setination.
 * @src: string of source.
 * @n: size of second string.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}

