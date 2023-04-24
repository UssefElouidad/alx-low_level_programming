#include <stdlib.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * malloc_checked - function that allocate memory.
 * @b: the size to allocate
 * Return: pointer p.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
