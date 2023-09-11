#include "dog.h"	/* Include the header file where struct dog is defined. */
#include <stddef.h>

/**
 * init_dog - Initialize a struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a char array containing the dog's name.
 * @age: The age of the dog.
 * @owner: Pointer to a char array containing the owner's name.
 *
 * Description: This function initializes the struct dog with the provided
 * name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)	/* Check if the pointer to struct dog is valid. */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
