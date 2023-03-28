#include "main.h"

/*
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: swap a and b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
