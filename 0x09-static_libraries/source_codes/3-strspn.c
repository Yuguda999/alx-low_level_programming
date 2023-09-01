/**
 * _strspn - Get length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing accepted characters
 *
 * Description: This function calculates the length of the initial segment of
 * string @s which consists only of bytes from the string @accept.
 *
 * Return: The number of bytes in the initial segment of @s consisting only of
 * bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
			break;

		length++;
		s++;
	}

	return (length);
}
