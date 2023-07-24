#include "main.h"

/**
 * main - entry point
 * description: checks lowecases
 * return: 1 if c is lowecase 0 otherwise
 */

int _islower(int c)
{	
	if ( c >= 97 && c <= 122 )
	{
	
		return(1);
	}
	else {
		return(0);
	}
}
