#include"main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: is the minimum
 * @max: is the maximum
 * Return: NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int i, num_elements;
	int *arr;

	if (min > max)
	{
	return (NULL);
	}

	num_elements = max - min + 1;

	arr = (int *) malloc(num_elements * sizeof(int));
	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
	arr[i] = min + i;
	}

	return (arr);
}


