#include <stdio.h>

/**
 * main - This program prints the single digit numbers
 *
 * Description: printing the single digit numbers using for loop
 * Return: always return 0
 */
int main(void)
{
	int SD_number;
	int comma;
/*	int space;*/
	int nwline;

	comma = ', ';
/*	space = ' ';*/
	newline = '\n';
	for (SD_number = '0'; SD_number <= '8'; SD_number++)
	{
		putchar(SD_number);
		putchar(comma);
		putchar(space);
	}
	SD_number++;
	putchar(SD_number);
	putchar(newline);
	return (0);
}
