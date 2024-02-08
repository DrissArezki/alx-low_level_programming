#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to a string
 * Return: conversion from binary to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		a <<= 1;
		a = a + b[i] - '0';
		i++;
	}
	return (a);
}
