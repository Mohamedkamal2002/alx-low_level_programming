#include "main.h"
/**
 * puts_half - printing every other char. of string
 * @str: str to be printed
 *
 * Description: if str "fsgfg" it prints "fgg"
 * Return: nothing
 */

void puts_half(char *str)
{
	char temp;

	while (*str != '\0')
	{
		temp = *str;
		str++;
		if(*str != '\0')
			str++;
		_putchar(temp);
	}
	_putchar('\n');
}
