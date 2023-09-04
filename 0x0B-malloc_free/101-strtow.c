#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
	int word_count = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	return (word_count);
}

/**
 * allocate_words - Allocates memory for an array of words.
 * @word_count: The number of words.
 *
 * Return: A pointer to the allocated array.
 */
static char **allocate_words(int word_count)
{
	char **words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * extract_word - Extracts a word from a string and allocates memory for it.
 * @str: The input string.
 * @start: The starting position of the word.
 * @end: The ending position of the word.
 *
 * Return: A pointer to the allocated word.
 */
static char *extract_word(char *str, int start, int end)
{
	int length = end - start + 1;
	char *word = (char *)malloc((length + 1) * sizeof(char));
	int i, j;

	if (word == NULL)
		return (NULL);

	for (i = start, j = 0; i <= end; i++, j++)
	{
		word[j] = str[i];
	}
	word[length] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	char **words = allocate_words(word_count);
	int i = 0, j = 0;
	int start;
	int k;

	if (str == NULL || *str == '\0')
		return (NULL);

	if (word_count == 0)
		return (NULL);

	if (words == NULL)
		return (NULL);

	while (i < word_count)
	{
		while (*str == ' ')
			str++;

		start = j;
		while (str[j] && str[j] != ' ')
			j++;

		words[i] = extract_word(str, start, j - 1);
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		j++;
		i++;
	}
	words[word_count] = NULL;

	return (words);
}
