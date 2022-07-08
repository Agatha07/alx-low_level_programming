#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters to be summed
 * Return: If n == 0, return 0, otherwise sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
/* Declaring pointer to the argument list */
	va_list ap;
	/* variable declaration */
	unsigned int i, sum;
	/* Initialize the argument list. */
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		/*
		 * Accessing current variable and pointing to
		 * next argument value
		 */
		sum += va_arg(ap, int);
	/* Clean up,ending argument */
	va_end(ap);
	return (sum);
}
