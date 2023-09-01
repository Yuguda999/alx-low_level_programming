#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: The character to search for
 *
 * Description: searches for the first occurrence of the character
 * c in the string s.
 *
 * Return: A pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
