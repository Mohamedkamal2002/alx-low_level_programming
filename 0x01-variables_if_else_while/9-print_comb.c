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
	int space;
	int nwline;

	comma = ',';
	space = ' ';
	nwline = '\n';
	for (SD_number = '0'; SD_number <= '9'; SD_number++)
	{
		putchar(SD_number);
		if (SD != '9')
		{
			putchar(comma);
			putchar(space);
		}

	}
	putchar(nwline);
	return (0);
}
