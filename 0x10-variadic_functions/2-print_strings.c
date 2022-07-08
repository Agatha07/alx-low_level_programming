#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: a string and f separator is NULL, don’t print it
 *         If one of the string is NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
