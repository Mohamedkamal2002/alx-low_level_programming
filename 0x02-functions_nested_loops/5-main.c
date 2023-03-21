#include "main.h"
/**
 * main - call the print_call function
 *
 * Description: call the print_call function and check the return value for it.
 * Return: Always 0
 */

int main(void)
{
	int r;
	r = print_sign(98);
	switch (r)
	{
		case 1:
			{
				_putchar('+');
				_putchar(',');
				_putchar(' ');
				_putchar('1');
			}
		case -1:
			{
				_putchar('-');
				_putchar(',');
				_putchar(' ');
				_putchar(r + '0');
			}
		case 0:
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				_putchar('0');
			}
	}
	return (0);

}
