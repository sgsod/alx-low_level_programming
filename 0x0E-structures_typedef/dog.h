#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog's description
  * @owner: owner of dog
  * @age: age of dog
  * @name: dog's name
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
   * dog_t - Typedef for struct dog
    */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
