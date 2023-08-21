#include "main.h"

/**
 * _strlen - finds the lenght of a string
 *
 * @s: the string
 *
 * Return: returns the length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
