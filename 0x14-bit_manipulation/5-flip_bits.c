#include <stdio.h>
#include "main.h"

/**
 ** flip_bits - flip flip flip
 ** @n: arg1
 ** @m: arg2
 ** Return: value.
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int ctr = 0;
	
	while (xor_res > 0)
	{
		ctr += xor_res & 1;					
		xor_res >>= 1;						
	}
	return (ctr);
}
