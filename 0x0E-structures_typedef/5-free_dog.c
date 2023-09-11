#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog_t structure to be freed.
 *
 * Description: This function deallocates memory previously allocated for a dog
 * structure, including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)	/* Check if the pointer to the dog_t is valid. */
	{
		free(d->name);	/* Free memory allocated for the name string. */
		free(d->owner);	/* Free memory allocated for the owner string. */
		free(d);	/* Free memory allocated for the dog structure itself. */
	}
}
