#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: detinatiom memory.
 * @src: memory fo source.
 * @n: memory bytes.
 * Return: a pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
