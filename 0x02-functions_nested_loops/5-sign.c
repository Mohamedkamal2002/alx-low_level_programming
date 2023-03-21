#include<stdio.h>
/**
 * print_sign - check the sign
 * @n: the number to be checked
 *
 * Description: check if the number is positive , negative or zero
 * Return: 1 for positive , 0 for zero ; -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
