#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a float).
 * @owner: The owner of the dog (a string).
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
