#include "main.h"

/**
 * print_sign - check the sign of integer
 * @n : the number to be checked
 *
 * Description: print the sign of n and return 1 for positive and negative
 * zero for zero
 * Return: 1 for postive and negative , zero for zero value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n==0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (1);
	}
}
