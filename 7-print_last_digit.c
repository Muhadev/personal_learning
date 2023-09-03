#include "main.h"


int print_last_digit(int n)

{
	int last_d;
	last_d = n % 10;
	if (last_d < 0)
	{
		last_d = -last_d;
	}
	_putchar(last_d + '0');
	return (last_d);
}
