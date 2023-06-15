#include"main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes.
 * Return: a pointer to the allocated memory if sucess
 * if fail terminate with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (p);
}

