/**
 * leet - Encodes a string into 1337
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	char *ptr = str;

	while (*ptr != '\0')
	{
		int i;

		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*ptr == letters[i])
		{
				*ptr = leet_replacements[i];
				break;
		}
		}
		ptr++;
	}

	return (str);
}
