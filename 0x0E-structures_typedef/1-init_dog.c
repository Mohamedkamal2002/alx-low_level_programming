#include "dog.h"
/**
 * init_dog - initialize structure
 * @d: pointer to struct with type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this function takes a struct dog and its attributes
 * and initialize it.
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
