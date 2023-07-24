#include "main.h"
/**
 * swap_int : function swaps values of two ints
 * @a:input
 * @b:input
 * return : a and b
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
