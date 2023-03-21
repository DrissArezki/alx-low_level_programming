#include <stdio.h>
/**
 * main - finds and prints the sum pf the even valued terms
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int n = 1, m = 2, c, sum = 0;

	for (a = 1; a <= 33; a++)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		c = n + m;
		n = m;
		m = c;
	}

	printf("%lu\n", sum);
	return (0);
}
