#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function multiplying 2 nums
 * @argc: number of arguments passed to function
 * @argv: array of pointer to arguments
 * Return: return 0 is successful 1 if failed
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int i;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		i = num1 * num2;
		printf("%d\n", i);
	}
	return (0);
}
