#include "main.h"

/**
* print_times_table - prints n times table starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n + 1; i++)
	{
	for (j = 0; j < n + 1; j++)
	{
		_putchar("%c", i * j);
		if (j < n)
		{
			_putchar(", ");
		}
	}
	_putchar("\n");
	}
	return (0);
}
