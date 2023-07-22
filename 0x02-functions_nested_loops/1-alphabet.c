#include "main.h"

/**
  *Main - entry poin
  *Description: prints alpha in lowercase
  *Returns: always 0 success
  *
  **/
void print_alphabet(void)
{	char C;

	for( C = 'a'; C <= 'z' ; C++)
	{
	_putchar(C);
	}
	_putchar('\n');
}
