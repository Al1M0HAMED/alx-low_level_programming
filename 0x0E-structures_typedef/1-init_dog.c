#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - .
 * @d: struct
 * @name: string.
 * @age: int.
 * @owner: string.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
