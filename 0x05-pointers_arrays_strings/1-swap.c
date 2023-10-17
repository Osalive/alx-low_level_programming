#include "main.h"

/** swap_int - take and swap two variable integers
 * @a: swap and take address of b
 * @b: swap and take address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
