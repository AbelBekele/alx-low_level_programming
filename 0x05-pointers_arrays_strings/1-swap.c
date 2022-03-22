#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *b;
	m = *a;
	*a = n;
	*b = m;
}
