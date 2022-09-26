#include <unistd.h>
/*putchar function*/
int _putchar (char c);
/*
int _putchar(char c)
{
return (write(1, &c, 1));
}
*/

/* use of memset*/
char *_memset(char *s, char b, unsigned int n);

/*copies memory area using memcpy*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*locates a character in a string*/
char *_strchr(char *s, char c);

/*returns the number of characters before a char*/
unsigned int _strspn(char *s, char *accept);

/* prints out similarities between two strings*/
char *_strpbrk(char *s, char *accept);

/*returns strings remaining strings from specified string*/char *_strstr(char *haystack, char *needle);

/*prints out contents of a two dimensional array*/
void print_chessboard(char (*a)[8]);
