#include "main.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string
 *@s: String to search
 *@c: Character to be located
 *
 *Return: A pointer to the first occurrence of the character c in the string s,
 *        or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
