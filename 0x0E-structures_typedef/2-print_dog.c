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
		(if (d->name != NULL)
			printf("%s", d->name);
		else
			printf("nil");
		if (d->name != NULL)
			printf("%f", d->age);
		else
			printf("nil");
		if (d->name != NULL)
			printf("%s", d->owner);
		else
			printf("nil");
	}
}
