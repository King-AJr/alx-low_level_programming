#include <stddef.h>

/*takes a string and passes it to function pointer*/
void print_name(char *name, void (*f)(char *));

/*executes a function as a parameter on elements of an array*/
 void array_iterator(int *array, size_t size, void (*action)(int));

 /* searches for an integer */
 int int_index(int *array, int size, int (*cmp)(int));
