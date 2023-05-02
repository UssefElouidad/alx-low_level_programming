#include <stdlib.h>
#include <string.h>
#include"main.h"
/**
 * _realloc - Reallocates a memory block.
 *
 * @ptr: Pointer to the memory block.
 * @oldSize: Size of the old memory block.
 * @newSize: Size of the new memory block.
 *
 * Return: Pointer to the new memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int oldSize, unsigned int newSize)
{
	void *newPtr;

	if (newSize == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	{
	return (malloc(newSize));
	}

	if (newSize == oldSize)
	{
	return (ptr);
	}

	newPtr = malloc(newSize);
	if (newPtr == NULL)
	{
	return (NULL);
	}

	if (newSize > oldSize)
	{
	memcpy(newPtr, ptr, oldSize);
	}
	else
	{
	memcpy(newPtr, ptr, newSize);
	}

	free(ptr);
	return (newPtr);
}

