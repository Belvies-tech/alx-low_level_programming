#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: int
 */
int compare_string(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare_string(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detect if a string is a palindrome.
 *
 * @s: the string to test
 *
 * Return: 1 if it is a pali...., 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (compare_string(s, 0,  _strlen_recursion(s) - 1));
}
