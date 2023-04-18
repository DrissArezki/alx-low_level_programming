#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infos of a dog
 * @name: name of the doge
 * @age: age o the dog
 * @owner: owner of that dog
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 *
 * dog_t is a type def for the structure dog that
 * contains infos about the dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
