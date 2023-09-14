#include "main.h"
#include <stdio.h>

void print_number(int n)
{

	int num = n;
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num == 0)
                _putchar('0');
	else
	{
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
}
