#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - print the last digit of the number stored in the variable
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x > 5)
		printf("and is greater than 5");
	if (x == 0)
		printf("and is 0");
	if (x < 6 && x != 0)
		printf("and is less than 6 and not zero");
	printf("\n");
	return (0);
}

