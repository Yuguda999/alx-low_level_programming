#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size in bytes of the old allocated space.
 * @new_size: New size in bytes of the memory block.
 *
 * Return: A pointer to the newly reallocated memory block.
 *         If new_size is equal to old_size, it returns ptr.
 * If new_size is zero and ptr is not NULL, it frees ptr and returns NULL.
 *         If ptr is NULL, it's equivalent to malloc(new_size).
 *         If realloc fails, it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);
	return (new_ptr);
}

