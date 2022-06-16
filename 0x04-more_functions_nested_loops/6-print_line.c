#include "main.h"
/**
 *print_line - Print a straight line on the command
 *@n: number of times to print
 */
void print_line(int n)
{
	char l;

	for (l = 0; l < n; l++)
	{
		_putchar ('_');
	}
	_putchar ('\n');

}
