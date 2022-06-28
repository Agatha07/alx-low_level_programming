#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: Size of memory
 * @c: the array
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
