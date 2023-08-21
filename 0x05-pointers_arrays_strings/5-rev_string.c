#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: the string
 *
 * Return: returns the reversed string
 */

void rev_string(char *s)
{
	/* Figure out the length first */
	int i, len;

	len = 0;

	while (s[len])
		len++;

	/* Print backwards */
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];

		s[len - 1 - i] = temp;
	}
}
