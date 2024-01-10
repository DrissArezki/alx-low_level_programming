#include "main.h"

/**
 * length_rec - function to calc the length of the string
 * @s: string
 * @len: length
 * Return: length of the string
 */
int length_rec(char *s, int len)
{
	if (*s == '\0')
		return len;
	return length_rec(s + 1, len + 1);
}

/**
 * is_palindrome_recursive - recursive fonction helping the main
 * @s: char to check if palindrome
 * @debut: start index
 * @length: length of the string
 * Return: test
 */

int is_palindrome_recursive(char *s, int debut, int length)
{
	if (debut >= length)
		return (1);
	if (s[debut] == s[length])
		return (is_palindrome_recursive(s, debut + 1, length - 1));
	else
		return (0);
}

/**
 * is_palindrome - main function
 * @s: char to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int debut = 0;
	int length = length_rec(s, 0) - 1;;
	
	return (is_palindrome_recursive(s, debut, length));
}
