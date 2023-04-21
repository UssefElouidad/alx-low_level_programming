#include"function_pointers.h"
/**
 * array_interator - a function that executes a function given as a parameter.
 * @size: the number of the elements of the array.
 * @cmp: a pointer to the function used to compare values.
 * Return: the index of the fisrt element or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))

		return (i);
	}
	return (-1);
}
