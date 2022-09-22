#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
/**
 * string_toupper - converts a given string to uppercase
 * @h: string passed to the function
 * Return: return uppercase string
 */

char *string_toupper(char *h)
{
int i;
char ch;
int j = strlen(h);

for (i = 0; i <= j; i++)
{
h[i] = toupper(h[i]);
}
return (h);
}
