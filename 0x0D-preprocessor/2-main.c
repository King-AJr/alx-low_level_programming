#include <stdio.h>

/**
 * main - prints out the filename from whic the function was called
 * Return: Return 0 always
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
