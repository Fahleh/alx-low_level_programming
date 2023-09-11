#ifndef DOG
#define DOG

/**
 * struct dog:- Struct dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A struct for a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
