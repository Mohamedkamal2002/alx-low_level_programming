#include <stdio.h>

/**
 * main - This program prints the hexadecimal numbers
 *
 * Description: printing the hexadecimal numbers using for loop
 * Return: always return 0
 */
int main(void)
{
	int hexa_number;
	int newline;

	newline = '\n';
	for (hexa_number = '0'; hexa_number <= '9'; hexa_number++)
		putchar(hexa_number);
	for (hexa_number = 'a'; hexa_number <= 'f'; hexa_number++)
		putchar(hexa_number);
	putchar(newline);
	return (0);
}
