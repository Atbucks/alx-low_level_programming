#include "main.h"

/**
  *Main - entry poin
  *Description: prints alpha in lowercase
  *Returns: always 0 success
  *
  **/
void print_alphabet_x10(void)
{
char C;
int i=0;

while(i <= 9)
{
for(C = 'a'; C <= 'z' ; C++)
{
_putchar(C);
}
_putchar('\n');
i++;
}
}
