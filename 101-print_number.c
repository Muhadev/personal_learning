#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int digits;
	int divisor = 1;
	int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
        {
                _putchar('0');
                return;
        }
	while (num > 9)
	{
		divisor *= 10;
		num = num / 10;
	}
	while (divisor > 0)
	{
		digits = n / divisor;
		_putchar(digits + '0');
		n = n % divisor;
		divisor /= 10;
	}

}
