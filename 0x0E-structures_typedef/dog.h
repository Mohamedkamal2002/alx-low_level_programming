#ifndef DOG_ST
#define DOG_ST

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct for dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
