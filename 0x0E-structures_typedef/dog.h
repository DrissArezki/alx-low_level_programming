#ifndef DOG_H
#define DOG_H

/**
 * struct dog - infos of a dog
 * @name: first member
 * @age: second member
 * @owner: third member
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
 */
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
