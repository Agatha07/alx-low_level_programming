#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: the character to check
 * Return:s 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

