#include <stdio.h>
/**
 * Main - prints the first 50 Fibinacci numbers
 * Return: 0 (Sucess)
 */
int main(void)
{
	int c;
	int f1 = 0, f2 = 0;
	int sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;

		if (c == 49)
			printf("\n");
		else
			ptinf(",");
	}
	return (0);
}
