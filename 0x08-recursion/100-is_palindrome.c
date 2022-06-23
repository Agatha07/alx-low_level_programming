#include "main.h"
/**
 * _strlen - Find the length of a string
 * @s: The string to be measured
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int length = 0;

	if (*(s - length))
	{
		length++;
		length += _strlen(s + length);
	}
	return (length);

}


/**
 * check_palindrome - Checks if a string is a palindrome
 *
 * @s: The string to be measured
 * @length: The leng of s
 * @index: Index of the string to be checked
 *
 * Return: 1 if the string is palindrome and 0 if not
 */

int check_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
	{
		return (1);
}
	if (s[index] == s[length - index - 1])
	{
		return (check_palindrome(s, length, index + 1));
	}

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to be checked.
 *
 * Return: 1 if a string is a palindrome and 0 if not
 *
 */


int is_palindrome(char *s)
{
	int index = 0;
	int length = _strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, length, index));
}
