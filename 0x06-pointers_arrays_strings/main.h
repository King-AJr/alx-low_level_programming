/* Concatenates two strings*/
char *_strcat(char *dest, char *src);

/*concatenates two strings but takes the number of bytes takes the number of bytes to copy from the second*/
char *_strncat(char *dest, char *src, int n);

/*copies a string*/
char *_strncpy(char *dest, char *src, int n);

/*reverse the contemt of an array of integers*/
void reverse_array(int *a, int n);

/*compare two strings*/
int _strcmp(char *s1, char *s2);

/*changes all lowercase to uppercase in a string*/
char *string_toupper(char *);

/*capitalizes the first character of each word*/
char *cap_string(char *);

/*uses leet encoding to convert letters*/
char *leet(char *);
