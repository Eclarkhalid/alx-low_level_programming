#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct representing a dog
 * @name: the dog's name (string)
 * @age: the dog's age (float)
 * @owner: the dog's owner (string)
 *
 * Description: This struct contains basic information about a dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif /* DOG_H */
