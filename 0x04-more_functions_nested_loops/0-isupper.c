#include "main.h"

/**
* _isupper - checks for uppercase character
* @c:Check character c
* *Return: 1 if c uppercase 0 otherwise
*/
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
