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
	r = print_sign(0);
	r = print_sign(0xff);
	r = print_sign(-1);
	return (0);
}
