#include <stdio.h>
/**
 * main - Use putchar to print single numbers of base ten
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);
}