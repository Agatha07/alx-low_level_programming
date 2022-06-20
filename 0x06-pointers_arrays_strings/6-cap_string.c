#include "main.h"
/**
 * *cap_string - capitalizes the first letter of all words of a string
* @str: String to be capitalized
* Return: 0
*/

char *cap_string(char str[], int n)
{
	int i;
	int j = 0;
	char sep[] = {'\t', '\n', ';', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < n; i++)
	{
		if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
		{
			if (str[i] != ' ' && str[i] == sep[j])
			{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = (char)(('A' - 'a') + str[i]);
			}
			}
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = (char)(str[i] + ('a' - 'A'));
	}
	}
	return (0);
}
