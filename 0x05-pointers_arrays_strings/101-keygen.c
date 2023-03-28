#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords for
 * the program 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	char key[100];
	int i = 0, s = 0, n;
	
	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		key[i] = rand() % 78;
		s = s + (key[i] + '0');
		putchar(key[i] + '0');
	
	if ((2772 - s) - '0' < 78)
	{
		n = 2772 - s -'0';
		s = s + n;
		putchar(n +'0');
		break;
	}
	}
	return (0);
}	
