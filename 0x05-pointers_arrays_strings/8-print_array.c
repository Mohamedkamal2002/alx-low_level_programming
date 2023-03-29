#include "main.h"
/**
 * Print_array - printing string
 * @a: array 
 * @n: number of elements to be printed from the array.
 *
 * Description: printing elements of an array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	char temp;
	int i;

	for (i = 0 ; i < n ; i++)
	{
		temp = a[i]
		_putchar(temp);
	}
	_putchar('\n');
}
