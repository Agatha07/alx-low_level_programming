#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed
 *		to by s with the constant byte b
 * @s: Pointer to the block of memory to fill
 * @b: Value to be filled
 * @n: Number of bytes to be filled to the value
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
	*(s + i) = b;
	i++;
	}
	return (s);
}
