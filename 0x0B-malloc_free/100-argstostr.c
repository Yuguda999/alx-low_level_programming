#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: If ac is 0 or av is NULL, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of all arguments and newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0; /* Reset len for the next argument */
	}

	/* Allocate memory for the concatenated string */
	str = (char *)malloc(total_len * sizeof(char) + 1); /* +1 for the null terminator */

	if (str == NULL)
		return (NULL);

	/* Copy arguments and add newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[j] = av[i][j];
		str[j] = '\n'; /* Add a newline character */
		str += j + 1; /* Move to the next position in the string */
	}

	str[total_len - 1] = '\0'; /* Null-terminate the final string */
	return (str - total_len + 1); /* Reset the pointer to the start of the string */
}
