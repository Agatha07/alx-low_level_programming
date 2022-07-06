#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: pointer to function print name
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}