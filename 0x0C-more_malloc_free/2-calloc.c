#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: the number of elements.
 * @size: byte size of array elements.
 *
 * Return: If nmemb or size is 0 return NULL, If malloc fails,
 *                  then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	my_array = malloc(size * nmemb);
	if (my_array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		my_array[i] = 0;

	return (my_array);
}
