#include "main.h"
/**
 *_isdigit - checks for a digit character
 *@c: the character to check
 *Return:s 1 if c is a digit,0 otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
