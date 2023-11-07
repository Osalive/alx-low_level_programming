#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function
 *struct dog - new data type
 *
 *@name : name of the dog
 *@owner : identity of the dog's owner
 *@age : age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
