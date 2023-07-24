#include "main.h"

/**
 * main - entry point
 * description: checks lowecases
 * return: 1 if c is lowecase 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
	_putchar('\n');
}
