#include <stdio.h>

/**
 *main - Print the numbers of base 16 in lowercase
 *
 *Return: 0
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	for (numbers = 'a'; numbers <= 'f'; numbers++)
		putchar(numbers);

	putchar('\n');

	return (0);
}
