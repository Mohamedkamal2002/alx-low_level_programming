#include "stdio.h"
#include "dog.h"
/**
 * print_dog - printing structure
 * @d: pointer to struct
 *
 * Description: ~
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d)
	{	
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->name != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->name != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
