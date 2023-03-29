#include "main.h"
/**
 * print_rev - print reverse string
 * @s: the string to be reversed and printed
 *
 * Description: the string to be reversed and printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int length;
	int i;
	char temp;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length; i > 0 ; i--)
	{
		s--;
		temp = *s;
		_putchar(temp);
	}
	_putchar('\n');
}
