#include "main.h"
#include <stdio.h>


void print_number(int n)
{
	int real_num;
	int divisor = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		real_num = n / divisor;
		_putchar(real_num + '0');
		n %= divisor;
		divisor /= 10;
	}
}
