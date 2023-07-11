/**
 * _strdup - copy string
 *
 * @str: string to be copied
 * Description: ~
 * Return: pointer to char
 */
#include "stdlib.h"

char *_strdup(char *str)
{
	char *str_cp;
	int i,l;

	if (str == NULL)
		return (NULL);
	i = 1;
	while(str[i]!= '\0')
		i++;
	str_cp = malloc(i + 1);
	if (str_cp == NULL)
		return (NULL);
	for (l = 0 ; l <= i ; l++)
		str_cp[l] = str[l];
	if(str_cp == NULL)
		return (NULL);
	return (str_cp);
}
