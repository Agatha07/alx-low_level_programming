#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string which is a
 * duplicate of the string str.Memory for the new string is obtained
 * with malloc, and can be freed with free
 *
 * @str: String to duplicate
 * Return: NULL if str = NULL, pointer to a duplicate string if success and
 * NULL if insufficient memory was available
 *
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i = 0;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	newstr = malloc((i + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	while (str[len])
	{
		newstr[len] = str[len];
		len++;
	}

	newstr[len] = '\0';
	return (newstr);
}
