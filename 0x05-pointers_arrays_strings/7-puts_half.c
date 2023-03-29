#include "main.h"
/**
 * puts_half - print half string
 * @s: the string to be divided and printed
 *
 * Description: ~
 * Return: nothing
 */
void puts_half(char *str)
{
	int length;
	int i;
	char temp;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = str - length;
	length = length / 2 ;
	for (i = 0; i <  length ; i--)
	{
		temp = *str;
		_putchar(temp);
		str++;
	}
	_putchar('\n');
}
