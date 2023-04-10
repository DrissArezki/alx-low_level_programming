#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of two arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		Return(1);
	}

	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[2]);
	int mul = num_1 * num_2;

	printf("%d\n", mul);
	return (0);
}
