#include "main.h"
/**
 * _strlen_recursion - Find the length od a string
 * @s: String to scan
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));

	}
	else
		return (0);
}
