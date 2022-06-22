#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: Number
 * Return: Factorial o n and -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
