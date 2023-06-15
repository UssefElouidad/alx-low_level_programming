#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: memory 
 * @size: size of memory.
 * Return: a pointer to memory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	unsigned int total_size;
	char *ptr;
        unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	alloc = malloc(total_size);

	if (alloc == NULL)
		exit(98);

	ptr = alloc;

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (alloc);
}
