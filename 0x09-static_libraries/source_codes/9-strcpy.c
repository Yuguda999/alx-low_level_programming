#include "main.h"
/**
 * _strcpy - does something
 *
 * @src: var 1
 *
 * @dest: var 2
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}

