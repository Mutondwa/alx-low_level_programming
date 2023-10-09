#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog – a struct that creates dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: first struct with alx
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
