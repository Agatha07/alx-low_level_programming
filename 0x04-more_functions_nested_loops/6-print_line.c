#include "main.h"
/**
 *print_line - Print a straight line on the command
 *@n: number of times to print
 */
void print_line(int n)
{
	while (n != 0)
	{
		_putchar('_');
		n--;
	}
}
