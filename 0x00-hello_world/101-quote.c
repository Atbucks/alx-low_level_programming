#include<unistd.h>

/**
 * main - write function to print string by not using puts of printf
 *
 * Return 1 : success
 *
 **/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
