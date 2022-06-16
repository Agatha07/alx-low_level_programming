#include "main.h"
/**
 * *_strncat - Concatenate two strings using strncat function
 *
 * @dest: Destination string. This is pointer to the destination array
 * @src: Source string.This is the string to be appended
 * @n: This is the maximum number of characters to be appended.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	
		for (j = 0; src[j] != '\0' && j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	
	dest[i] = '\0';
	}
	return (dest);
}
