#include "main.h"

void test(int i)
{
	int r ;

	r = print_last_digit(i);
	_putchar('0' + r);
	_putchar('\n');

}
/**
 * main - call the function
 *
 * Description: ~
 * Return: always 0
 */

int main(void)
{
	int r;

	r = test(98);
	return (0);
}
