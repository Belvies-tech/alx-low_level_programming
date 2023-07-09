#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smaller iterator.
 * @n2: bigger iterator.
 * Return: . 
 */
int comparator(char *s, n1, n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 +1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detectif a string is palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparator(s, _strlen_recursion(s) - 1));
}	