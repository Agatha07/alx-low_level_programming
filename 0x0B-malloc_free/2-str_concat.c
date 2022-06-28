#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Convatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to a newly allocated space in memory
 *          and NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, s3_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s3 = malloc(sizeof(char) * len);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[s3_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		s3[s3_index++] = s2[i];

	return (s3);
}
