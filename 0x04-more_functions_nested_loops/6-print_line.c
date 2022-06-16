#include "main.h"
/**
 *print_line - Print a straight line on the command
 *@n: number of times to print
 */
void print_line(int n)
{
	int length;
	
	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar ('_');
	}
	_putchar ('\n')

}
