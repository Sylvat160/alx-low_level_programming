#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: a dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
