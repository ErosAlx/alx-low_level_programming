#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: dog's name
 * @age: age of the dog
 * @owner: dog owner
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */
