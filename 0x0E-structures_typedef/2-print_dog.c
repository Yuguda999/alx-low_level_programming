#include "dog.h" /* Include the header file where struct dog is defined. */
#include <stdio.h> /* Include the standard library for printf function. */
#include <stddef.h>

/**
 * print_dog - Print the details of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the details of a struct dog, including its
 * name, age, and owner. If any element is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL) /* Check if the pointer to struct dog is valid. */
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
