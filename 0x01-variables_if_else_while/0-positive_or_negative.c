#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program checks if n +ve, -ve or zero
 *
 * Description: if n variable is
 * postive  --> it will print "n value" is positive
 * negative --> it will print "n value" is negative
 * zero     --> it will print "n value" is  zero
 * Return: always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
