#include "main.h"

/**
 * swap_int - swaps values of two variable integers
 * @a: swap and take address of b
 * @b: swap and take address of a
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
