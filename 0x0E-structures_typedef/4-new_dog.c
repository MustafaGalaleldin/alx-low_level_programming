#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (!owner || !owner || age < 0)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
