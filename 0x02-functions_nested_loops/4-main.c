#include "main.h"

/**
 * test_isalpha - Test the _isalpha function
 * @n: Number to pass to _isalpha function
 * 
 * Description: ~
 * Return: nothing 
 */
void test_isalpha(int n)
{
	int r;

	r = _isalpha(n);
	_putchar(r + '0');
	_putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Description: ~
 * Return: Always 0.
 */
int main(void)
{
	test_isalpha('H');
	return (0);
}
