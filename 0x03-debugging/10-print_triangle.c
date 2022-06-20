#include <stdio.h>
/**
 * main - Print a triangle
 * Return: 0
 */

int main(void)
{
	int i, j, rows;

	rows = 5;

	for (i = 0; i < rows; i++)
	{
	for (j = 0; j < rows; j++)
	{
	if (j < rows - i - 1)
	{
	printf(" ");
	}
	else
	{
	printf("*");
	}
	}
	printf("\n");
	}
	return (0);
}
