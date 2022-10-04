#include <unistd.h>
/*putchar function*/
int _putchar (char c);
/*
int _putchar(char c)
{
return (write(1, &c, 1));
}
*/

/*creates an areay of character and initializes it with a single char*/
char *create_array(unsigned int size, char c);

/*returns a pointer to a given string*/
char *_strdup(char *str);

/*concatenates 2 strings*/
char *str_concat(char *s1, char *s2);

/* return a pointer to a 2d array*/
int **alloc_grid(int width, int height);

/*free up 2d array previously created*/
void free_grid(int **grid, int height);
