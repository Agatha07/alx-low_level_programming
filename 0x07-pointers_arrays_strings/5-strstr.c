#include <string.h>
#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: The string to be searched
 * @needle: The string that we need to search in string haystack
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
