#include <stdio.h>
/**
 * main - lists the sum of all the multiples of 3 and 5 below 1024
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
