#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to a string
 * Return: conversion from binary to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			a <<= 1;
		}
		else if (b[i] == '1')
		{
			a = (a << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (a);
}
