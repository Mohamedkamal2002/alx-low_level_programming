#include <stdio.h>

/**
 * main - This program prints the combinations of 3 digit number
 *
 * Descriptioniofere:~
 * Return: always return 0
 */
int main(void)
{
	int FD_number;
	int SD_number;
	int TH_number;
	int comma;
	int space;
	int nwline;

	comma = ',';
	space = ' ';
	nwline = '\n';
	for (TH_number = '0'; TH_number <= '9'; TH_number++)
		for (SD_number = TH_number + 1; SD_number <= '9'; SD_number++)
			for (FD_number = SD_number + 1; FD_number <= '9'; FD_number++)
			{
				putchar(TH_number);
				putchar(SD_number);
				putchar(FD_number);
				if (TH_number != '7')
				{
					putchar(comma);
					putchar(space);
				}

			}
	putchar(nwline);
	return (0);
}
