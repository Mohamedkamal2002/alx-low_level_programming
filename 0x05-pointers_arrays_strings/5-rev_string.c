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
	char temp[1000];

	length = 0;
	while (*s != '\0')
	{
		temp[length] = *s;
		length++;
		s++;
	}
	s = s - length;
	for (i = 0; i < length ; i++)
		*(s + i) = temp[length - i - 1];
	s = s - length;
}
