#include "main.h"
#include <string.h>
/**
 * _strspn - return length of prefix of s consisting of characters in accept
 * @s: The main string to be scanned
 * @accept: the string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int j;

	for (bytes = 0; s[bytes]; bytes++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[bytes] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (bytes);
}
