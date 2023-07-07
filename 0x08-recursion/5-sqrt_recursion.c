#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

