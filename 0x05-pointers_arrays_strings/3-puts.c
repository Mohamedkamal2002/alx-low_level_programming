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
	while (*str !='\0')
		_putchar((((*char)(char)*str))++);
	_putchar('\n');
}
