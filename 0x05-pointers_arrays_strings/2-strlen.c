#include"main.h"
/**
 * strlen - count the length of a string
 * @s: is the string
 *
 * Description: count the length of string
 * Return: integer that represents the length
 */
int _strlen(char *s)
{
	int length; /*string length*/
	
	length = 0;
	while( *s != '\0')
		length++;
	return (length)

}
