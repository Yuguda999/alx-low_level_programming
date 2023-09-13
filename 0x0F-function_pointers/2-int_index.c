#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: The index of the first element for which the cmp does not return 0.
 * If no element matches or if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
