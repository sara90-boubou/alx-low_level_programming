#ifndef _DOG_H
#define  _DOG_H
/**
* struct dog - A structure to represent information about a dog.
*
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
