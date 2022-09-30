#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers pointing to arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
