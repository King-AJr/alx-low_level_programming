#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
long int lType;
long long int llType;
char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(floatType));
printf("Size of a long int: %zu byte(s)\n", sizeof(lType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
