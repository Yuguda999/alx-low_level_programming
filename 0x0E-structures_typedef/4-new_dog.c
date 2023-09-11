#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog - Create a new dog and store a copy of name and owner.
 * @name: Pointer to a char array containing the dog's name.
 * @age: The age of the dog.
 * @owner: Pointer to a char array containing the owner's name.
 *
 * Return: Pointer to the newly created dog (dog_t).
 *         NULL if memory allocation fails or any input is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);

	if (new_dog_ptr == NULL)
		return (NULL); /* Memory allocation failed, return NULL. */

	/* Allocate memory and copy the name and owner strings. */
	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
/* Memory allocation for name or owner failed, free memory and return NULL. */
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr); /* Return the newly created dog. */
}
