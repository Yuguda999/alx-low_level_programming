#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator
 * @c: Character to check
 *
 * Return: true if c is a separator, false otherwise
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (true);
	}
	return (false);
}

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	bool new_word = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - 'a' + 'A';
			}
		new_word = false;
		}
		else
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
			{
				*ptr = *ptr + 'a' - 'A';
			}
	}

		ptr++;
	}

	return (str);
}
