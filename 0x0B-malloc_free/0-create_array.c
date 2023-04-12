#include"main.h"
#include<stdlib.h>
/**
 * create_array - function that creates array.
 * @size: size of the array.
 * @c: char.
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
