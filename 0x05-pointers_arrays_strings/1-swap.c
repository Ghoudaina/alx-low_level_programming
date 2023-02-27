#include <stdio.h>

/**
 * swap_int - it swaps the valus of two integers 
 * @a: is the first integer to be swapped 
 * @b :i is the secod integer to be swapped 
 *
 * Return: nothing 
 */

void swap_int(int *a, int *b)
	/*this is the function that swaps the values of two different integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
