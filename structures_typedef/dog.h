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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
