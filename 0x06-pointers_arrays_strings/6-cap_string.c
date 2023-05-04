#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int s = 0;

	while (str[s])
	{
		while (!(str[s] >= 'a' && str[s] <= 'z'))
			s++;

		if (str[s - 1] == ' ' ||
		    str[s - 1] == '\t' ||
		    str[s - 1] == '\n' ||
		    str[s - 1] == ',' ||
		    str[s - 1] == ';' ||
		    str[s - 1] == '.' ||
		    str[s - 1] == '!' ||
		    str[s - 1] == '?' ||
		    str[s - 1] == '"' ||
		    str[s - 1] == '(' ||
		    str[s - 1] == ')' ||
		    str[s - 1] == '{' ||
		    str[s - 1] == '}' ||
		    s == 0)
			str[s] -= 32;

		s++;
	}

	return (str);
}
