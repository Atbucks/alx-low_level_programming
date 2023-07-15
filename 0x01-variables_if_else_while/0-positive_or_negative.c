#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *main . Detrmine whether the number is positive or negative.
 *Description : else  if , if statments
 *
 *Return (0): always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if else statments */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
