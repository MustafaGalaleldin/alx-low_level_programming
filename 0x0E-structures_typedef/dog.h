#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs details
 * @name: dog's name
 * @age: dog's name
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
