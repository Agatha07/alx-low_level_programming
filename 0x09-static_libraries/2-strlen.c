#include "main.h"
/**
 * _strlen - Function to calculate length of a string
 * @s:String
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
