#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - this progam check the last digit value of the random number n
 *
 * Description: if the last digit of n 
 * n > 6 and not equal zero:
 * print("Last digit of %d is %d and is less than 6 and not 0" ,n ,last_digit)
 * n = 0
 * print("Last digit of %d is 0 and is 0" ,n)
 * n > 5
 *print("Last digit of %d is %d and is greater than 5" ,n ,last_digit)
 * Return: alway retrun 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 last_digit = n % 10 ; /* calc the last digit*/
	if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is greater than 5\n",n, last_digit);

	return (0);
}
