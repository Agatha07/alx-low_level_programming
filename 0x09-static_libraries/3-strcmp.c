#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: An integer value zero, positive or negative
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
