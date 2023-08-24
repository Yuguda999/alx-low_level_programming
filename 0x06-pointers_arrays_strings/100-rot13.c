/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
	char *input = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *output = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*ptr != '\0')
	{
		int i;

		for (i = 0; input[i] != '\0'; i++)
		{
			if (*ptr == input[i])
			{
				*ptr = output[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
