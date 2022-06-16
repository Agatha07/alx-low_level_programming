#include "main.h"
/**
 *print_line - Print a straight line on the command
 *@n: number of times to print
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
	{
		_putchar(95);
		n++;
	}
	}
}
