#include "main.h"

/**
* _islower - checks for lowercase character
* @c:Check character c
* *Return: 1 if c lowercase 0 otherwise
*/
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
