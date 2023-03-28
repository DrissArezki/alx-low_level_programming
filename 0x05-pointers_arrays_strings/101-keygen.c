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
	char key[];
	int i = 0; s = 0;
	int n;
	
	srand(time(0));
	for (i < 100; i++)
	{
	key[i] = rand() % 78;
	sum = sum + (key[i] + '0');
	_putchar(key[i] + '0');
	if ((2772 - s) - '0' < 78)
	{
		n = 2772 - s -'0';
		s = s + n;
		_putchar(n +'0');
		break;
	}
	}
	return (0);
}	
