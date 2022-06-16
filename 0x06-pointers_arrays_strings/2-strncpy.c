#include "main.h"
/**
 * *_strncpy - A [rogram that copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: This is the maximum number of characters to be appended
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; src[b] != '\0' &&  b < n; b++)
	{
		dest[b] = src[b];
	}
	for (b = 0; b< n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
