#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a char.
 * @size: The size of the array to create.
 * @c: The char used for initialization.
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0 */
	}

	array = malloc(sizeof(char) * size); /* Allocate memory for the array */

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c; /* Initialize each element with the specified char */
	}

	return (array); /* Return a pointer to the created array */
}
