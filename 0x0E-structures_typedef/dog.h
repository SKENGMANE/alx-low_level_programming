#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a simple dog structure
 * @owner: owner of dog
 * @name: name of dog
 * @age: age of dog
 */
struct dog
{
	char *owner;
	char *name;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
