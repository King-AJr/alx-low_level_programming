#include "main.h"
#include <string.h>

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void rev_string(char *s);
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

/**
 * print_rev - print given strings in reverse          * @s: stores the string passed to the fx
 */
void rev_string(char *s)
{
int len = strlen(s);
char a[len];
int right = len - 1;
int i;
for (i = right; i >= 0; i--)
{
a[i] = s[i];
}
printf("%s", a);
}
