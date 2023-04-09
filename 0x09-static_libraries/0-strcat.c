#include"main.h"
/**
 * _strcat - fonction that appends src string to the dest string.
 * @dest: string destination.
 * @src: source string.
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int ld = 0, ls = 0;

while (*(dest + ld) != '\0')
ld++;
while (*(src + ls) != '\0' && ld < 97)
{
	*(dest + ld) = *(src + ls);
	ld++;
	ls++;
}
*(dest + ld) = '\0';
return (dest);
}
