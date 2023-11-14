#include <stdio.h>

/**
 * _abs - to compute absolute value of an integer
 * @n: int type variable
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	else
	{
		n = n;
	}
	return (n);
}
