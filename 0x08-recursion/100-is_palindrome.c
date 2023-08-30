#include <stdio.h>

/**
 * palindrome_recursive - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	return (palindrome_recursive(s, 0, length - 1));
}

/**
 * palindrome_recursive - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: All characters checked */
	}
	if (s[start] != s[end])
	{
		return (0); /* Characters don't match, not a palindrome */
	}
	return (palindrome_recursive(s, start + 1, end - 1));
}

