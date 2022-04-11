#ifndef _dog_H_
#define _dog_H

typedef struct dog
/**
 * struct dog - structure that contains dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct called "dog" that stores its name, age and its owners name
 */
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 *  * dog_t - new typedef for struct dog
 *   */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
