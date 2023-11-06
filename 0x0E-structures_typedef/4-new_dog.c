#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strcpy - o
 * @dest: in
 * @src: in
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i]);
	return (dest);
}
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
	p->name = malloc(_strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = _strcpy(p->name, name);
	p->owner = malloc(_strlen(owner) + 1);
	if (!(p->owner))
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->owner = _strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
