/**
 * create_array - create a string and initialize it
 *
 * @size: the size of array
 * @c: the char that initialize the arrat
 * Description: this function take the size of string (size)and
 * allocate this size and intialize it with single char (c)
 * Return: Null if the size is zero - pointer to string or null if it fails
 */

#include "stdlib.h"

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	if (size <= 0)
		return NULL;
	s = malloc((size + 1) * sizeof (char));
	if (s == NULL)
		return NULL;
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i]= '\0';
	return (s);
}
