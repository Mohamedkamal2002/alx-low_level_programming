#include"main.h"
/**
 * _strcpy - string copy
 * @dest: destination
 * @src: source
 *
 * Description: ~
 * Return: pointer to char.
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		*dest = *src;
		dest++;
		src++;
	}
	if (*(src + 1) = '\0')
	*(dest + 1) = '\0';
	dest = dest - len;
	return (dest);

}
