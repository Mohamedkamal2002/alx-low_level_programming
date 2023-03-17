#include <stdio.h>

/**
 * main - This program prints all combination for 2 digits number
 *
 * Description: ~
 * Return: always return 0
 */
int main(void)
{
	int FD_number;
	int SD_number
	int comma;
	int space;
	int nwline;

	comma = ',';
	space = ' ';
	nwline = '\n';
	for (SD_number = '0'; SD_number <= '9'; SD_number++)
		for (SD_number = '0'; SD_number <= '9'; SD_number++)	
		{
			if (FD_number == SD_number)
				break;
			putchar(SD_number);
			putchar(FD_number);
			if (SD_number != '9')
			{
				putchar(comma);
				putchar(space);
			}

		}
	putchar(nwline);
	return (0);
}
