#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @n: any number
* Return: value of the last digit 
*/
int print_last_digit(int i)
{
	_putchar((i % 10) + '0');
	return (i % 10);
}
