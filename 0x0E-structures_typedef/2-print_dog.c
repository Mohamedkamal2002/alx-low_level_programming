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
	
	(if (d->name != NULL)
		printf("Name: %s", d->name);
	else
		printf("Name: nil");
	if (d->name != NULL)
		printf("Age: %f", d->age);
	else
		printf("Age: nil");
	if (d->name != NULL)
		printf("Owner: %s", d->owner);
	else
		printf("Owner: nil");
}
