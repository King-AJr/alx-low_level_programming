/*allocates memory using malloc*/
void *malloc_checked(unsigned int b);

/*function concatenates 2 strings*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/*allocates space for an array*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*allocate space to array and fill it with integer from min to max*/
int *array_range(int min, int max);
