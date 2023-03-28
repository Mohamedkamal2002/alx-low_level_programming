#include "main.h"
/**
 * _puts - printing string
 * @str: str to be printed
 *
 * Description: printing string
 * Return: nothing
 */

void _puts(char *str)
{
	char temp;

	while (*str != '\0')
	{
		temp = *(str)++;
		_putchar(temp);
	}
}
