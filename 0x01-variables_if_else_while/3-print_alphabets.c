#include<stdio.h>

/**
  *main - Entry poin alphabetts
  *Description: using while loop and if and continue to break the loop
  *
  * Return: always 0
  *
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
		putchar('\n');
	return (0);
}
