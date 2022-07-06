#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of a program.
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		index++;

		str[index++] = '\n';
		index++;
	}

	str[len] = '\0';

	return (str);
}
