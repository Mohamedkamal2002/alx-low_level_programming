#include <stdio.h>

/**
 * main - This program prints the combinations of 2 digit number
 *
 * Description:~
 * Return: always return 0
 */
int main(void)
{
        int FOD_number;
        int TD_number;
        int FD_number;
        int SD_number;
        int comma;
        int space;
        int nwline;

        comma = ',';
        space = ' ';
        nwline = '\n';
        for (FOD_number = '0'; FOD_number <= '9' ; FOD_number++)
            for (TD_number = '0' ; TD_number <= '9' ; TD_number)
                for (SD_number = FOD_number ; SD_number <= '9'; SD_number++)
                        for (FD_number = TD_number+1; FD_number <= '9'; FD_number++)
                        {
                                putchar(FOD_number);
                                putchar(TD_number);
                                putchar(space);
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

