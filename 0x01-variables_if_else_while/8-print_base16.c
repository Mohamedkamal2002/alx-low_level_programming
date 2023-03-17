#include <stdio.h>


/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - this program prints hexadecimal numbers in lowercase
 *
 * Return: alway retrun 0
 */
int main(void)
{
	char i;
	char *hexa;
	char newline;

	newline = '\n';
	i = 0;
	*hexa = "0123456789abcdef";
	while (*(hexa + 1) != '\0')
		putchar(hexa[i++]);
	putchar(newline);
	retrun 0;
}
