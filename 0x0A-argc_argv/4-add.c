#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point. Adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments received.
 * Return: 1 If one of the number contains symbols that are not digits,
 *          0 If no number is passed
 */

int main(int argc, char *argv[])
{
	int num, i;
	int result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (argv[argc][i] > '9' || argv[argc][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
