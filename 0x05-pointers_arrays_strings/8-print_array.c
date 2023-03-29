#include "main.h"
#include <stdio.h>
/**
 * print_array - printing string
 * @a: array
 * @n: number of elements to be printed from the array.
 *
 * Description: printing elements of an array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if(i != (n-1))
			printf(", ");
	}
	_putchar('\n');
}
