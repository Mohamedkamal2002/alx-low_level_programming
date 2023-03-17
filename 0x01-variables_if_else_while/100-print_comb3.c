#include <stdio.h>

/**
 * main - This program prints the combinations of 2 digit number
 *
 * Descriptioniofere:~
 * Return: always return 0
 */
int main(void)
{
	int FD_number;
	int SD_number;
	int comma;
	int space;
	int nwline;

	comma = ',';
	space = ' ';
	nwline = '\n';
	for (SD_number = '0'; SD_number <= '9'; SD_number++)
		for (FD_number = SD_number + 1; FD_number <= '9'; FD_number++)
		{
			putchar(SD_number);
			putchar(FD_number);
			if (SD_number != '8')
			{
				putchar(comma);
				putchar(space);
			}

		}
	putchar(nwline);
	return (0);
}
