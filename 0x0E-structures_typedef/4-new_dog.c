#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
int name_len, owner_len;
if (!name || !owner)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (!new_dog)
return (NULL);
name_len = strlen(name) + 1;
new_name = malloc(name_len);
if (!new_name)
{
free(new_dog);
return (NULL);
}
owner_len = strlen(owner) + 1;
new_owner = malloc(owner_len);
if (!new_owner)
{
free(new_name);
free(new_dog);
return (NULL);
}
strncpy(new_name, name, name_len);
strncpy(new_owner, owner, owner_len);
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
return (new_dog);
}
