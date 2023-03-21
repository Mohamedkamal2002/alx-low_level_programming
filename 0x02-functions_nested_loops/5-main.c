/**
 * main - call the print_call function
 *
 * Description: call the print_call function and check the return value for it.
 * Return: Always 0
 */
#include <limits.h>
#include "main.h"

int main(void)
{
	int r;

	r = print_sign(98);
	if (r < 0)
		r *= -1;
	printf("-");
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
