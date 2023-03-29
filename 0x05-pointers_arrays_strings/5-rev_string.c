#include "main.h"
/**
 * rev_string -  reverse string
 * @s: the string to be reversed 
 *
 * Description: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int length;
	int i;
	char temp[500];

	length = 0;
	while (*s != '\0')
	{
		length++;
		*temp = *s;
		s++;
	}
	for (i = length; i > 0 ; i--)
		*(s - i - 1) = temp[i];
	
}
