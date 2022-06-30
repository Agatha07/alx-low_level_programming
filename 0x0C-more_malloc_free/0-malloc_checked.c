#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: Number of bytes to be allocated in memory
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
