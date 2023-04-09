#include "main.h"
/**
 * _strncat - fonction that appends src string to the dest string.
 * @dest: string destination.
 * @src: source string.
 * @n: number of bytes used.
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int ld = 0, ls = 0;

while (*(dest + ld) != '\0')
ld++;
while (*(src + ls) != '\0' && ld < 97 && ls < n)
{
	*(dest + ld) = *(src + ls);
	ld++;
	ls++;
}
*(dest + ld) = '\0';
return (dest);
}
