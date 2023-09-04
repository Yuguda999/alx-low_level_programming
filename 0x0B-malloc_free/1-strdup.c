#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the input string.
 * @str: The input string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL); /* Return NULL if the input string is NULL */
	}

	/* Calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Copy the input string to the duplicated string */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate); /* Return a pointer to the duplicated string */
}
