#include "main.h"
#ifndef DOG
#define DOG

/**
 * struct dog - data pet
 * @name: dog name
 * @age: dog age
 * @owner: owner for the dog
 * Description: get the sigle data of a pet
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type for struct dog
 */
typedef struct dog dog_t;

#endif
