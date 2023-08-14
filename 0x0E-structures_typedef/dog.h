#ifndef DOG
#define DOG
/**
 * struct dog - Short description
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /**DOG.h*/
