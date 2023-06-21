#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array of integers to look into.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used.
 * Return: the index of the first element or -1 if no matche.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
