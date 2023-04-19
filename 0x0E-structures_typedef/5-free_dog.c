#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - a function that frees memory allocated for a dog's struct.
 * @d: struct to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
