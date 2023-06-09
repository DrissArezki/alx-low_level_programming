#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min num of coins change
 * @argv: arguments vector
 * @argc: arguments counter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = 25, 10, 5, 2, 1};
	int money;
	int i;
	int total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		if (money >= coins[i])
		{
			total = total + (money / coins[i]);
			money = money % coins[i];
		}
	}
	printf("%d\n", total);
	return (0);
}
