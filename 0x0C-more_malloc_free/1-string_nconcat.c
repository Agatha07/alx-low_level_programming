#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: Pointer to a newly allocated space in memory, Null if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		s3[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s3[len++] = s2[i];

	s3[len] = '\0';

	return (s3);
}
