#include <stddef.h>

/**
 * _strstr - Locate a substring
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to locate
 *
 * Description: finds the first occurrence of the substring @needle
 * in the string @haystack. The terminating null bytes (\0) are not compared.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
