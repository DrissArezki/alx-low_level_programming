#include <stdio.h>
/**
 * main - Find & print the first 98 fibonacci numbers starting with 1 & 2
 */
int main(void)
{
	unsigned long int i;
	unsigned long int x;
	unsigned long int y;
	unsigned long int lim;
	unsigned long int x1;
	unsigned long int x2;
	unsigned long int y1;
	unsigned long int y2;

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", y);
		y = y + x;
		x = y - x;
