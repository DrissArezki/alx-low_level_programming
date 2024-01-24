#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;
	int i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx", opcode[i]);
	}
	return (0);
}
