#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: values of the array
 * @max: values of the array
 * Return: pointer to new created array,
 *           NULL if min > max and NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *my_array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;
	my_array = malloc(sizeof(int) * (size + 1));
	if (my_array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		my_array[i] = min++;

	return (my_array);
}
